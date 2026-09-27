#pragma once
// IWYU pragma private; include "Steamworks/GameOverlayActivated_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__GameOverlayActivated_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_bActive", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_bUserInitiated", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_dwOverlayPID", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Steamworks::GameOverlayActivated_t::GameOverlayActivated_t(uint8_t  m_bActive, bool  m_bUserInitiated, ::Steamworks::AppId_t  m_nAppID, uint32_t  m_dwOverlayPID) noexcept  {
this->m_bActive = m_bActive;
this->m_bUserInitiated = m_bUserInitiated;
this->m_nAppID = m_nAppID;
this->m_dwOverlayPID = m_dwOverlayPID;
}
// Ctor Parameters []
constexpr ::Steamworks::GameOverlayActivated_t::GameOverlayActivated_t()   {
}
