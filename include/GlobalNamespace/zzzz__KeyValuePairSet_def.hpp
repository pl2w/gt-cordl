#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyValuePairSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(KeyValuePairSet)
namespace GlobalNamespace {
struct KeyValueStringPair;
}
// Forward declare root types
namespace GlobalNamespace {
class KeyValuePairSet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KeyValuePairSet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyValuePairSet*, "", "KeyValuePairSet");
// [CreateAssetMenu(fileName = "New KeyValuePairSet", menuName = "Data/KeyValuePairSet", order = 0)]
// Dependencies KeyValueStringPair, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: KeyValuePairSet
class CORDL_TYPE KeyValuePairSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Entries)) ::ArrayW<::GlobalNamespace::KeyValueStringPair>  Entries;

/// @brief Field m_entries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_entries, put=__cordl_internal_set_m_entries)) ::ArrayW<::GlobalNamespace::KeyValueStringPair>  m_entries;

static inline ::GlobalNamespace::KeyValuePairSet* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair> const& __cordl_internal_get_m_entries() const;

constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair>& __cordl_internal_get_m_entries() ;

constexpr void __cordl_internal_set_m_entries(::ArrayW<::GlobalNamespace::KeyValueStringPair>  value) ;

/// @brief Method .ctor, addr 0x57f009c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Entries, addr 0x57f0094, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::KeyValueStringPair> get_Entries() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyValuePairSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyValuePairSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyValuePairSet(KeyValuePairSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyValuePairSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyValuePairSet(KeyValuePairSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{185};

/// [SerializeField]
/// @brief Field m_entries, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::KeyValueStringPair>  ___m_entries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyValuePairSet, ___m_entries) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyValuePairSet) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
