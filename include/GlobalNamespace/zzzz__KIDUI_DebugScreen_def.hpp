#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_DebugScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUI_DebugScreen)
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_DebugScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_DebugScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_DebugScreen*, "", "KIDUI_DebugScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_DebugScreen
class CORDL_TYPE KIDUI_DebugScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5a5638c, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetOrCreateUsername, addr 0x5a56400, size 0x8, virtual false, abstract: false, final false
static inline ::StringW GetOrCreateUsername() ;

static inline ::GlobalNamespace::KIDUI_DebugScreen* New_ctor() ;

/// @brief Method OnClose, addr 0x5a563fc, size 0x4, virtual false, abstract: false, final false
inline void OnClose() ;

/// @brief Method OnResetUserAndQuit, addr 0x5a563f8, size 0x4, virtual false, abstract: false, final false
inline void OnResetUserAndQuit() ;

/// @brief Method ResetAll, addr 0x5a56408, size 0x4, virtual false, abstract: false, final false
inline void ResetAll() ;

/// @brief Method .ctor, addr 0x5a5640c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_DebugScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_DebugScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_DebugScreen(KIDUI_DebugScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_DebugScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_DebugScreen(KIDUI_DebugScreen const& ) = delete;

/// @brief Field KID_ENABLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_ENABLED_KEY{u"dbg-kid-enabled"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::KIDUI_DebugScreen) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
