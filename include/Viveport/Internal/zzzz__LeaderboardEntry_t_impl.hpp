#pragma once
// IWYU pragma private; include "Viveport/Internal/LeaderboardEntry_t.hpp"
#include "Viveport/Internal/zzzz__LeaderboardEntry_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nGlobalRank", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_nScore", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_pUserName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::LeaderboardEntry_t::LeaderboardEntry_t(int32_t  m_nGlobalRank, int32_t  m_nScore, ::StringW  m_pUserName) noexcept  {
this->m_nGlobalRank = m_nGlobalRank;
this->m_nScore = m_nScore;
this->m_pUserName = m_pUserName;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::LeaderboardEntry_t::LeaderboardEntry_t()   {
}
