#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/StringTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__DetailedLocalizationTable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringTable)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Localization::Tables {
class StringTableEntry;
}
namespace UnityEngine::Localization::Tables {
class StringTable___c;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class StringTable;
}
namespace UnityEngine::Localization::Tables {
class StringTable___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::StringTable*);
MARK_REF_T(::UnityEngine::Localization::Tables::StringTable___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::StringTable*, "UnityEngine.Localization.Tables", "StringTable");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::StringTable___c*, "UnityEngine.Localization.Tables", "StringTable/<>c");
// Dependencies UnityEngine.Localization.Tables.DetailedLocalizationTable`1<TEntry>
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.StringTable
class CORDL_TYPE StringTable : public ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<::UnityEngine::Localization::Tables::StringTableEntry*> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Tables::StringTable___c;

/// @brief Method CollectLiteralCharacters, addr 0xb01a634, size 0x3c8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<char16_t>* CollectLiteralCharacters() ;

/// @brief Method CreateTableEntry, addr 0xb01a9fc, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Tables::StringTableEntry* CreateTableEntry() ;

/// @brief Method GenerateCharacterSet, addr 0xb01a4e8, size 0x14c, virtual false, abstract: false, final false
inline ::StringW GenerateCharacterSet() ;

static inline ::UnityEngine::Localization::Tables::StringTable* New_ctor() ;

/// @brief Method .ctor, addr 0xb01aaa0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringTable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringTable(StringTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringTable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringTable(StringTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25085};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Tables::StringTable) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.StringTable/<>c
class CORDL_TYPE StringTable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Tables::StringTable___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_2<char16_t,char16_t>*  __9__0_0;

static inline ::UnityEngine::Localization::Tables::StringTable___c* New_ctor() ;

/// @brief Method <GenerateCharacterSet>b__0_0, addr 0xb01ab58, size 0x8, virtual false, abstract: false, final false
inline char16_t _GenerateCharacterSet_b__0_0(char16_t  c) ;

/// @brief Method .ctor, addr 0xb01ab50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Tables::StringTable___c* getStaticF___9() ;

static inline ::System::Func_2<char16_t,char16_t>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::Tables::StringTable___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_2<char16_t,char16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringTable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringTable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringTable___c(StringTable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringTable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringTable___c(StringTable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25084};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Tables::StringTable___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
