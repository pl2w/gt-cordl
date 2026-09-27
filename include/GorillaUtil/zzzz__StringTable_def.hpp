#pragma once
// IWYU pragma private; include "GorillaUtil/StringTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaUtil/zzzz__StringTable_StringPair_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringTable)
namespace GlobalNamespace {
struct StringTable_StringPair;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GorillaUtil {
class StringTable;
}
// Write type traits
MARK_REF_T(::GorillaUtil::StringTable*);
DEFINE_IL2CPP_CLASS(::GorillaUtil::StringTable*, "GorillaUtil", "StringTable");
// [CreateAssetMenu(fileName = "StringTable", menuName = "Scriptable Objects/StringTable")]
// Dependencies GorillaUtil.StringTable::StringPair, UnityEngine.ScriptableObject
namespace GorillaUtil {
// Is value type: false
// CS Name: GorillaUtil.StringTable
class CORDL_TYPE StringTable : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using StringPair = ::GlobalNamespace::StringTable_StringPair;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_KeyList)) ::StringW  KeyList;

/// @brief Field dict, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dict, put=__cordl_internal_set_dict)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  dict;

/// @brief Field entries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries, put=__cordl_internal_set_entries)) ::ArrayW<::GlobalNamespace::StringTable_StringPair>  entries;

/// @brief Field keyList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyList, put=__cordl_internal_set_keyList)) ::StringW  keyList;

/// @brief Method ContainsKey, addr 0x5b6bc68, size 0x124, virtual false, abstract: false, final false
inline bool ContainsKey(::StringW  key) ;

/// @brief Method FetchValue, addr 0x5b6bd8c, size 0x78, virtual false, abstract: false, final false
inline ::StringW FetchValue(::StringW  key) ;

static inline ::GorillaUtil::StringTable* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_dict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_dict() ;

constexpr ::ArrayW<::GlobalNamespace::StringTable_StringPair> const& __cordl_internal_get_entries() const;

constexpr ::ArrayW<::GlobalNamespace::StringTable_StringPair>& __cordl_internal_get_entries() ;

constexpr ::StringW const& __cordl_internal_get_keyList() const;

constexpr ::StringW& __cordl_internal_get_keyList() ;

constexpr void __cordl_internal_set_dict(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_entries(::ArrayW<::GlobalNamespace::StringTable_StringPair>  value) ;

constexpr void __cordl_internal_set_keyList(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b6be04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method buildKeyList, addr 0x5b6bb58, size 0x110, virtual false, abstract: false, final false
inline ::StringW buildKeyList() ;

/// @brief Method get_Count, addr 0x5b6bafc, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_KeyList, addr 0x5b6bb14, size 0x44, virtual false, abstract: false, final false
inline ::StringW get_KeyList() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3844};

/// [SerializeField]
/// @brief Field entries, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::StringTable_StringPair>  ___entries;

/// @brief Field dict, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___dict;

/// @brief Field keyList, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___keyList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaUtil::StringTable, ___entries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaUtil::StringTable, ___dict) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaUtil::StringTable, ___keyList) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaUtil::StringTable) == 0x30, "Size mismatch!");

} // namespace end def GorillaUtil
