#pragma once
// IWYU pragma private; include "Steamworks/GameOverlayActivated_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameOverlayActivated_t)
// Forward declare root types
namespace Steamworks {
struct GameOverlayActivated_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameOverlayActivated_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameOverlayActivated_t, "Steamworks", "GameOverlayActivated_t");
// [CallbackIdentity(331)]
// Dependencies Steamworks.AppId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameOverlayActivated_t
#pragma pack(push, 4)
struct CORDL_TYPE GameOverlayActivated_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameOverlayActivated_t() ;

// Ctor Parameters [CppParam { name: "m_bActive", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_bUserInitiated", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_dwOverlayPID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameOverlayActivated_t(uint8_t  m_bActive, bool  m_bUserInitiated, ::Steamworks::AppId_t  m_nAppID, uint32_t  m_dwOverlayPID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14b)};

/// @brief Field m_bActive, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_bActive;

/// @brief Field m_bUserInitiated, offset: 0x1, size: 0x1, def value: None
 bool  m_bUserInitiated;

/// @brief Field m_nAppID, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

/// @brief Field m_dwOverlayPID, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_dwOverlayPID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameOverlayActivated_t, m_bActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameOverlayActivated_t, m_bUserInitiated) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameOverlayActivated_t, m_nAppID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameOverlayActivated_t, m_dwOverlayPID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameOverlayActivated_t) == 0xc, "Size mismatch!");

} // namespace end def Steamworks
