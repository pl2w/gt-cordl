#pragma once
// IWYU pragma private; include "Steamworks/GetTicketForWebApiResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetTicketForWebApiResponse_t)
// Forward declare root types
namespace Steamworks {
struct GetTicketForWebApiResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GetTicketForWebApiResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GetTicketForWebApiResponse_t, "Steamworks", "GetTicketForWebApiResponse_t");
// [CallbackIdentity(168)]
// Dependencies Steamworks.EResult, Steamworks.HAuthTicket
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GetTicketForWebApiResponse_t
#pragma pack(push, 4)
struct CORDL_TYPE GetTicketForWebApiResponse_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GetTicketForWebApiResponse_t() ;

// Ctor Parameters [CppParam { name: "m_hAuthTicket", ty: "::Steamworks::HAuthTicket", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_cubTicket", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_rgubTicket", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr GetTicketForWebApiResponse_t(::Steamworks::HAuthTicket  m_hAuthTicket, ::Steamworks::EResult  m_eResult, int32_t  m_cubTicket, ::ArrayW<uint8_t>  m_rgubTicket) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_hAuthTicket, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HAuthTicket  m_hAuthTicket;

/// @brief Field m_eResult, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_cubTicket, offset: 0x8, size: 0x4, def value: None
 int32_t  m_cubTicket;

/// @brief Field m_rgubTicket, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgubTicket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GetTicketForWebApiResponse_t, m_hAuthTicket) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetTicketForWebApiResponse_t, m_eResult) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetTicketForWebApiResponse_t, m_cubTicket) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetTicketForWebApiResponse_t, m_rgubTicket) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GetTicketForWebApiResponse_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
