#pragma once
// IWYU pragma private; include "Steamworks/GetTicketForWebApiResponse_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__HAuthTicket_impl.hpp"
#include "Steamworks/zzzz__GetTicketForWebApiResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hAuthTicket", ty: "::Steamworks::HAuthTicket", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_cubTicket", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_rgubTicket", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Steamworks::GetTicketForWebApiResponse_t::GetTicketForWebApiResponse_t(::Steamworks::HAuthTicket  m_hAuthTicket, ::Steamworks::EResult  m_eResult, int32_t  m_cubTicket, ::ArrayW<uint8_t>  m_rgubTicket) noexcept  {
this->m_hAuthTicket = m_hAuthTicket;
this->m_eResult = m_eResult;
this->m_cubTicket = m_cubTicket;
this->m_rgubTicket = m_rgubTicket;
}
// Ctor Parameters []
constexpr ::Steamworks::GetTicketForWebApiResponse_t::GetTicketForWebApiResponse_t()   {
}
