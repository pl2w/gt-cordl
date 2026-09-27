#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Formatting/FormatCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FormatCache)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableValueChanged;
}
namespace UnityEngine::Localization::Tables {
class LocalizationTable;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatCache;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*, "UnityEngine.Localization.SmartFormat.Core.Formatting", "FormatCache");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Formatting.FormatCache
class CORDL_TYPE FormatCache : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CachedObjects)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  CachedObjects;

 __declspec(property(get=get_Format, put=set_Format)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  Format;

 __declspec(property(get=get_LocalVariables, put=set_LocalVariables)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  LocalVariables;

/// @brief Field Table, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Table, put=__cordl_internal_set_Table)) ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  Table;

 __declspec(property(get=get_VariableTriggers)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  VariableTriggers;

/// @brief Field <CachedObjects>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachedObjects_k__BackingField, put=__cordl_internal_set__CachedObjects_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _CachedObjects_k__BackingField;

/// @brief Field <Format>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Format_k__BackingField, put=__cordl_internal_set__Format_k__BackingField)) ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  _Format_k__BackingField;

/// @brief Field <LocalVariables>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalVariables_k__BackingField, put=__cordl_internal_set__LocalVariables_k__BackingField)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  _LocalVariables_k__BackingField;

/// @brief Field <VariableTriggers>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__VariableTriggers_k__BackingField, put=__cordl_internal_set__VariableTriggers_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  _VariableTriggers_k__BackingField;

static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable> const& __cordl_internal_get_Table() const;

constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>& __cordl_internal_get_Table() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__CachedObjects_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__CachedObjects_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& __cordl_internal_get__Format_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& __cordl_internal_get__Format_k__BackingField() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* const& __cordl_internal_get__LocalVariables_k__BackingField() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*& __cordl_internal_get__LocalVariables_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>* const& __cordl_internal_get__VariableTriggers_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*& __cordl_internal_get__VariableTriggers_k__BackingField() ;

constexpr void __cordl_internal_set_Table(::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  value) ;

constexpr void __cordl_internal_set__CachedObjects_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__Format_k__BackingField(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

constexpr void __cordl_internal_set__LocalVariables_k__BackingField(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value) ;

constexpr void __cordl_internal_set__VariableTriggers_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  value) ;

/// @brief Method .ctor, addr 0xb048568, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CachedObjects, addr 0xb048548, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* get_CachedObjects() ;

/// [CompilerGenerated]
/// @brief Method get_Format, addr 0xb048538, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* get_Format() ;

/// [CompilerGenerated]
/// @brief Method get_LocalVariables, addr 0xb048550, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* get_LocalVariables() ;

/// [CompilerGenerated]
/// @brief Method get_VariableTriggers, addr 0xb048560, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>* get_VariableTriggers() ;

/// [CompilerGenerated]
/// @brief Method set_Format, addr 0xb048540, size 0x8, virtual false, abstract: false, final false
inline void set_Format(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocalVariables, addr 0xb048558, size 0x8, virtual false, abstract: false, final false
inline void set_LocalVariables(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatCache(FormatCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatCache(FormatCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25235};

/// [CompilerGenerated]
/// @brief Field <Format>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  ____Format_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CachedObjects>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____CachedObjects_k__BackingField;

/// @brief Field Table, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  ___Table;

/// [CompilerGenerated]
/// @brief Field <LocalVariables>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  ____LocalVariables_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VariableTriggers>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  ____VariableTriggers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache, ____Format_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache, ____CachedObjects_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache, ___Table) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache, ____LocalVariables_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache, ____VariableTriggers_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Core::Formatting
