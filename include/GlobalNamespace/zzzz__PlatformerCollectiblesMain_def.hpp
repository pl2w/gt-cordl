#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformerCollectiblesMain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlatformerCollectiblesMain)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformerCollectiblesMain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformerCollectiblesMain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformerCollectiblesMain*, "", "PlatformerCollectiblesMain");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformerCollectiblesMain
class CORDL_TYPE PlatformerCollectiblesMain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Coin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Coin, put=__cordl_internal_set_Coin)) ::UnityW<::UnityEngine::GameObject>  Coin;

/// @brief Field CoinGridCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoinGridCount, put=__cordl_internal_set_CoinGridCount)) float_t  CoinGridCount;

/// @brief Field CoinGridSize, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CoinGridSize, put=__cordl_internal_set_CoinGridSize)) float_t  CoinGridSize;

static inline ::GlobalNamespace::PlatformerCollectiblesMain* New_ctor() ;

/// @brief Method Start, addr 0x55e8284, size 0x150, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Coin() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Coin() ;

constexpr float_t const& __cordl_internal_get_CoinGridCount() const;

constexpr float_t& __cordl_internal_get_CoinGridCount() ;

constexpr float_t const& __cordl_internal_get_CoinGridSize() const;

constexpr float_t& __cordl_internal_get_CoinGridSize() ;

constexpr void __cordl_internal_set_Coin(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_CoinGridCount(float_t  value) ;

constexpr void __cordl_internal_set_CoinGridSize(float_t  value) ;

/// @brief Method .ctor, addr 0x55e83d4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformerCollectiblesMain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformerCollectiblesMain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformerCollectiblesMain(PlatformerCollectiblesMain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformerCollectiblesMain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformerCollectiblesMain(PlatformerCollectiblesMain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29};

/// @brief Field Coin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Coin;

/// @brief Field CoinGridCount, offset: 0x28, size: 0x4, def value: None
 float_t  ___CoinGridCount;

/// @brief Field CoinGridSize, offset: 0x2c, size: 0x4, def value: None
 float_t  ___CoinGridSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformerCollectiblesMain, ___Coin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformerCollectiblesMain, ___CoinGridCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformerCollectiblesMain, ___CoinGridSize) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformerCollectiblesMain) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
