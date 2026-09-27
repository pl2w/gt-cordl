#pragma once
// IWYU pragma private; include "GlobalNamespace/NonCosmeticItemProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__NonCosmeticItemProvider_ItemType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NonCosmeticItemProvider)
namespace GlobalNamespace {
struct NonCosmeticItemProvider_ItemType;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class NonCosmeticItemProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NonCosmeticItemProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NonCosmeticItemProvider*, "", "NonCosmeticItemProvider");
// Dependencies GTZone, NonCosmeticItemProvider::ItemType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NonCosmeticItemProvider
class CORDL_TYPE NonCosmeticItemProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ItemType = ::GlobalNamespace::NonCosmeticItemProvider_ItemType;

/// @brief Field conditionThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_conditionThreshold, put=__cordl_internal_set_conditionThreshold)) int32_t  conditionThreshold;

/// @brief Field itemType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemType, put=__cordl_internal_set_itemType)) ::GlobalNamespace::NonCosmeticItemProvider_ItemType  itemType;

/// @brief Field useCondition, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_useCondition, put=__cordl_internal_set_useCondition)) bool  useCondition;

/// @brief Field zone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

static inline ::GlobalNamespace::NonCosmeticItemProvider* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x570dec8, size 0x21c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr int32_t const& __cordl_internal_get_conditionThreshold() const;

constexpr int32_t& __cordl_internal_get_conditionThreshold() ;

constexpr ::GlobalNamespace::NonCosmeticItemProvider_ItemType const& __cordl_internal_get_itemType() const;

constexpr ::GlobalNamespace::NonCosmeticItemProvider_ItemType& __cordl_internal_get_itemType() ;

constexpr bool const& __cordl_internal_get_useCondition() const;

constexpr bool& __cordl_internal_get_useCondition() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_conditionThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_itemType(::GlobalNamespace::NonCosmeticItemProvider_ItemType  value) ;

constexpr void __cordl_internal_set_useCondition(bool  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x570e0e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NonCosmeticItemProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NonCosmeticItemProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NonCosmeticItemProvider(NonCosmeticItemProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonCosmeticItemProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonCosmeticItemProvider(NonCosmeticItemProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1167};

/// @brief Field zone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [Tooltip("only for honeycomb")]
/// @brief Field useCondition, offset: 0x24, size: 0x1, def value: None
 bool  ___useCondition;

/// @brief Field conditionThreshold, offset: 0x28, size: 0x4, def value: None
 int32_t  ___conditionThreshold;

/// @brief Field itemType, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::NonCosmeticItemProvider_ItemType  ___itemType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NonCosmeticItemProvider, ___zone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NonCosmeticItemProvider, ___useCondition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NonCosmeticItemProvider, ___conditionThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NonCosmeticItemProvider, ___itemType) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NonCosmeticItemProvider) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
