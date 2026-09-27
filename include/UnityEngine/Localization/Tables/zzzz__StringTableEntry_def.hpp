#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/StringTableEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Tables/zzzz__TableEntry_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringTableEntry)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::Pseudo {
class PseudoLocale;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatCache;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class StringTableEntry;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::StringTableEntry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::StringTableEntry*, "UnityEngine.Localization.Tables", "StringTableEntry");
// Dependencies UnityEngine.Localization.Tables.TableEntry
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.StringTableEntry
class CORDL_TYPE StringTableEntry : public ::UnityEngine::Localization::Tables::TableEntry {
public:
// Declarations
 __declspec(property(get=get_FormatCache, put=set_FormatCache)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  FormatCache;

 __declspec(property(get=get_IsSmart, put=set_IsSmart)) bool  IsSmart;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Field m_FormatCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FormatCache, put=__cordl_internal_set_m_FormatCache)) ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  m_FormatCache;

/// @brief Method GetLocalizedString, addr 0xb019da4, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString() ;

/// @brief Method GetLocalizedString, addr 0xb01a280, size 0xcc, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(/* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method GetLocalizedString, addr 0xb01a34c, size 0xcc, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(::System::Collections::Generic::IList_1<::System::Object*>*  args) ;

/// @brief Method GetLocalizedString, addr 0xb01a418, size 0xd0, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(::System::IFormatProvider*  formatProvider, ::System::Collections::Generic::IList_1<::System::Object*>*  args) ;

/// @brief Method GetLocalizedString, addr 0xb019e64, size 0x41c, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(::System::IFormatProvider*  formatProvider, ::System::Collections::Generic::IList_1<::System::Object*>*  args, ::UnityEngine::Localization::Pseudo::PseudoLocale*  pseudoLocale) ;

/// @brief Method GetOrCreateFormatCache, addr 0xb01120c, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* GetOrCreateFormatCache() ;

static inline ::UnityEngine::Localization::Tables::StringTableEntry* New_ctor() ;

/// @brief Method RemoveFromTable, addr 0xb019c14, size 0x190, virtual false, abstract: false, final false
inline void RemoveFromTable() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* const& __cordl_internal_get_m_FormatCache() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*& __cordl_internal_get_m_FormatCache() ;

constexpr void __cordl_internal_set_m_FormatCache(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  value) ;

/// @brief Method .ctor, addr 0xb019c0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FormatCache, addr 0xb019a7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache* get_FormatCache() ;

/// @brief Method get_IsSmart, addr 0xb013084, size 0x90, virtual false, abstract: false, final false
inline bool get_IsSmart() ;

/// @brief Method get_Value, addr 0xb019a8c, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method set_FormatCache, addr 0xb019a84, size 0x8, virtual false, abstract: false, final false
inline void set_FormatCache(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  value) ;

/// @brief Method set_IsSmart, addr 0xb019b3c, size 0xd0, virtual false, abstract: false, final false
inline void set_IsSmart(bool  value) ;

/// @brief Method set_Value, addr 0xb019aa4, size 0x98, virtual false, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringTableEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringTableEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringTableEntry(StringTableEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringTableEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringTableEntry(StringTableEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25083};

/// @brief Field m_FormatCache, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatCache*  ___m_FormatCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::StringTableEntry, ___m_FormatCache) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::StringTableEntry) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
