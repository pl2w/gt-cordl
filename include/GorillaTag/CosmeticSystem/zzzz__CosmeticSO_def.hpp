#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticSO)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::CosmeticSystem::CosmeticSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticSO*, "GorillaTag.CosmeticSystem", "CosmeticSO");
// [CreateAssetMenu(fileName = "Untitled_CosmeticSO", menuName = "- Gorilla Tag/CosmeticSO", order = 0)]
// Dependencies GorillaTag.CosmeticSystem.CosmeticInfoV2, UnityEngine.ScriptableObject
namespace GorillaTag::CosmeticSystem {
// Is value type: false
// CS Name: GorillaTag.CosmeticSystem.CosmeticSO
class CORDL_TYPE CosmeticSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field info, offset 0x18, size 0x2b0 
 __declspec(property(get=__cordl_internal_get_info, put=__cordl_internal_set_info)) ::GorillaTag::CosmeticSystem::CosmeticInfoV2  info;

/// @brief Field propHuntWeight, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_propHuntWeight, put=__cordl_internal_set_propHuntWeight)) int32_t  propHuntWeight;

static inline ::GorillaTag::CosmeticSystem::CosmeticSO* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d48bdc, size 0x24, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShowPropHuntWeight, addr 0x5d48bd4, size 0x8, virtual false, abstract: false, final false
inline bool ShowPropHuntWeight() ;

constexpr ::GorillaTag::CosmeticSystem::CosmeticInfoV2 const& __cordl_internal_get_info() const;

constexpr ::GorillaTag::CosmeticSystem::CosmeticInfoV2& __cordl_internal_get_info() ;

constexpr int32_t const& __cordl_internal_get_propHuntWeight() const;

constexpr int32_t& __cordl_internal_get_propHuntWeight() ;

constexpr void __cordl_internal_set_info(::GorillaTag::CosmeticSystem::CosmeticInfoV2  value) ;

constexpr void __cordl_internal_set_propHuntWeight(int32_t  value) ;

/// @brief Method .ctor, addr 0x5d48c00, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticSO(CosmeticSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticSO(CosmeticSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4753};

/// @brief Field info, offset: 0x18, size: 0x2b0, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticInfoV2  ___info;

/// @brief Field propHuntWeight, offset: 0x2c8, size: 0x4, def value: None
 int32_t  ___propHuntWeight;

/// @brief Size padding 0x2c8 - 0x2d0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticSO, ___info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticSO, ___propHuntWeight) == 0x2c8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticSO) == 0x2c8, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
