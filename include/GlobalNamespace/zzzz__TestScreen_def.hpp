#pragma once
// IWYU pragma private; include "GlobalNamespace/TestScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcadeGame_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestScreen)
namespace GlobalNamespace {
struct ArcadeButtons;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TestScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestScreen*, "", "TestScreen");
// Dependencies ArcadeGame, UnityEngine.SpriteRenderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestScreen
class CORDL_TYPE TestScreen : public ::GlobalNamespace::ArcadeGame {
public:
// Declarations
/// @brief Field dot, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_dot, put=__cordl_internal_set_dot)) ::UnityW<::UnityEngine::Transform>  dot;

/// @brief Field lights, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lights, put=__cordl_internal_set_lights)) ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  lights;

/// @brief Method ButtonDown, addr 0x56d353c, size 0x4c, virtual true, abstract: false, final false
inline void ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method ButtonUp, addr 0x56d34f0, size 0x4c, virtual true, abstract: false, final false
inline void ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method GetNetworkState, addr 0x56d344c, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetNetworkState() ;

static inline ::GlobalNamespace::TestScreen* New_ctor() ;

/// @brief Method OnTimeout, addr 0x56d3588, size 0x4, virtual true, abstract: false, final false
inline void OnTimeout() ;

/// @brief Method SetNetworkState, addr 0x56d3454, size 0x4, virtual true, abstract: false, final false
inline void SetNetworkState(::ArrayW<uint8_t>  b) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dot() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>> const& __cordl_internal_get_lights() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>& __cordl_internal_get_lights() ;

constexpr void __cordl_internal_set_dot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lights(::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  value) ;

/// @brief Method .ctor, addr 0x56d358c, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method buttonToLightIndex, addr 0x56d3458, size 0x98, virtual false, abstract: false, final false
inline int32_t buttonToLightIndex(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestScreen(TestScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestScreen(TestScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1064};

/// [SerializeField]
/// @brief Field lights, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::SpriteRenderer>>  ___lights;

/// [SerializeField]
/// @brief Field dot, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestScreen, ___lights) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestScreen, ___dot) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestScreen) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
