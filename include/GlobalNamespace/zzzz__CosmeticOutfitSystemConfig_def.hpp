#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticOutfitSystemConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticOutfitSystemConfig)
// Forward declare root types
namespace GlobalNamespace {
class CosmeticOutfitSystemConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticOutfitSystemConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticOutfitSystemConfig*, "", "CosmeticOutfitSystemConfig");
// [CreateAssetMenu(fileName = "CosmeticOutfitSystemConfig", menuName = "Gorilla Tag/Cosmetics/OutfitSystem", order = 0)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticOutfitSystemConfig
class CORDL_TYPE CosmeticOutfitSystemConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field itemSeparator, offset 0x2a, size 0x2 
 __declspec(property(get=__cordl_internal_get_itemSeparator, put=__cordl_internal_set_itemSeparator)) char16_t  itemSeparator;

/// @brief Field mothershipKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipKey, put=__cordl_internal_set_mothershipKey)) ::StringW  mothershipKey;

/// @brief Field nonSubscriberMaxOutfits, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_nonSubscriberMaxOutfits, put=__cordl_internal_set_nonSubscriberMaxOutfits)) int32_t  nonSubscriberMaxOutfits;

/// @brief Field outfitSeparator, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get_outfitSeparator, put=__cordl_internal_set_outfitSeparator)) char16_t  outfitSeparator;

/// @brief Field selectedOutfitPref, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedOutfitPref, put=__cordl_internal_set_selectedOutfitPref)) ::StringW  selectedOutfitPref;

/// @brief Field subscriberMaxOutfits, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_subscriberMaxOutfits, put=__cordl_internal_set_subscriberMaxOutfits)) int32_t  subscriberMaxOutfits;

static inline ::GlobalNamespace::CosmeticOutfitSystemConfig* New_ctor() ;

constexpr char16_t const& __cordl_internal_get_itemSeparator() const;

constexpr char16_t& __cordl_internal_get_itemSeparator() ;

constexpr ::StringW const& __cordl_internal_get_mothershipKey() const;

constexpr ::StringW& __cordl_internal_get_mothershipKey() ;

constexpr int32_t const& __cordl_internal_get_nonSubscriberMaxOutfits() const;

constexpr int32_t& __cordl_internal_get_nonSubscriberMaxOutfits() ;

constexpr char16_t const& __cordl_internal_get_outfitSeparator() const;

constexpr char16_t& __cordl_internal_get_outfitSeparator() ;

constexpr ::StringW const& __cordl_internal_get_selectedOutfitPref() const;

constexpr ::StringW& __cordl_internal_get_selectedOutfitPref() ;

constexpr int32_t const& __cordl_internal_get_subscriberMaxOutfits() const;

constexpr int32_t& __cordl_internal_get_subscriberMaxOutfits() ;

constexpr void __cordl_internal_set_itemSeparator(char16_t  value) ;

constexpr void __cordl_internal_set_mothershipKey(::StringW  value) ;

constexpr void __cordl_internal_set_nonSubscriberMaxOutfits(int32_t  value) ;

constexpr void __cordl_internal_set_outfitSeparator(char16_t  value) ;

constexpr void __cordl_internal_set_selectedOutfitPref(::StringW  value) ;

constexpr void __cordl_internal_set_subscriberMaxOutfits(int32_t  value) ;

/// @brief Method .ctor, addr 0x578364c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticOutfitSystemConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticOutfitSystemConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticOutfitSystemConfig(CosmeticOutfitSystemConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticOutfitSystemConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticOutfitSystemConfig(CosmeticOutfitSystemConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1408};

/// @brief Field nonSubscriberMaxOutfits, offset: 0x18, size: 0x4, def value: None
 int32_t  ___nonSubscriberMaxOutfits;

/// @brief Field subscriberMaxOutfits, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___subscriberMaxOutfits;

/// @brief Field mothershipKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___mothershipKey;

/// @brief Field outfitSeparator, offset: 0x28, size: 0x2, def value: None
 char16_t  ___outfitSeparator;

/// @brief Field itemSeparator, offset: 0x2a, size: 0x2, def value: None
 char16_t  ___itemSeparator;

/// @brief Field selectedOutfitPref, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___selectedOutfitPref;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticOutfitSystemConfig, ___nonSubscriberMaxOutfits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticOutfitSystemConfig, ___subscriberMaxOutfits) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticOutfitSystemConfig, ___mothershipKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticOutfitSystemConfig, ___outfitSeparator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticOutfitSystemConfig, ___itemSeparator) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticOutfitSystemConfig, ___selectedOutfitPref) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticOutfitSystemConfig) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
