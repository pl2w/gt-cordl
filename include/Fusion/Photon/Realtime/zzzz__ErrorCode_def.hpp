#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCode)
// Forward declare root types
namespace Fusion::Photon::Realtime {
class ErrorCode;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::ErrorCode*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::ErrorCode*, "Fusion.Photon.Realtime", "ErrorCode");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.ErrorCode
class CORDL_TYPE ErrorCode : public ::System::Object {
public:
// Declarations
static inline ::Fusion::Photon::Realtime::ErrorCode* New_ctor() ;

/// @brief Method .ctor, addr 0x5f5dbdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorCode(ErrorCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorCode(ErrorCode const& ) = delete;

/// @brief Field AlreadyMatched offset 0xffffffff size 0x4
static constexpr int32_t  AlreadyMatched{static_cast<int32_t>(0x7ffb)};

/// @brief Field AuthenticationTicketExpired offset 0xffffffff size 0x4
static constexpr int32_t  AuthenticationTicketExpired{static_cast<int32_t>(0x7ff1)};

/// @brief Field CustomAuthenticationFailed offset 0xffffffff size 0x4
static constexpr int32_t  CustomAuthenticationFailed{static_cast<int32_t>(0x7ff3)};

/// @brief Field ExternalHttpCallFailed offset 0xffffffff size 0x4
static constexpr int32_t  ExternalHttpCallFailed{static_cast<int32_t>(0x7fe8)};

/// @brief Field GameClosed offset 0xffffffff size 0x4
static constexpr int32_t  GameClosed{static_cast<int32_t>(0x7ffc)};

/// @brief Field GameDoesNotExist offset 0xffffffff size 0x4
static constexpr int32_t  GameDoesNotExist{static_cast<int32_t>(0x7ff6)};

/// @brief Field GameFull offset 0xffffffff size 0x4
static constexpr int32_t  GameFull{static_cast<int32_t>(0x7ffd)};

/// @brief Field GameIdAlreadyExists offset 0xffffffff size 0x4
static constexpr int32_t  GameIdAlreadyExists{static_cast<int32_t>(0x7ffe)};

/// @brief Field HttpLimitReached offset 0xffffffff size 0x4
static constexpr int32_t  HttpLimitReached{static_cast<int32_t>(0x7fe9)};

/// @brief Field InternalServerError offset 0xffffffff size 0x4
static constexpr int32_t  InternalServerError{static_cast<int32_t>(0xffffffff)};

/// @brief Field InvalidAuthentication offset 0xffffffff size 0x4
static constexpr int32_t  InvalidAuthentication{static_cast<int32_t>(0x7fff)};

/// @brief Field InvalidEncryptionParameters offset 0xffffffff size 0x4
static constexpr int32_t  InvalidEncryptionParameters{static_cast<int32_t>(0x7fe5)};

/// @brief Field InvalidOperation offset 0xffffffff size 0x4
static constexpr int32_t  InvalidOperation{static_cast<int32_t>(0xfffffffe)};

/// @brief Field InvalidOperationCode offset 0xffffffff size 0x4
static constexpr int32_t  InvalidOperationCode{static_cast<int32_t>(0xfffffffe)};

/// @brief Field InvalidRegion offset 0xffffffff size 0x4
static constexpr int32_t  InvalidRegion{static_cast<int32_t>(0x7ff4)};

/// @brief Field JoinFailedFoundActiveJoiner offset 0xffffffff size 0x4
static constexpr int32_t  JoinFailedFoundActiveJoiner{static_cast<int32_t>(0x7fea)};

/// @brief Field JoinFailedFoundExcludedUserId offset 0xffffffff size 0x4
static constexpr int32_t  JoinFailedFoundExcludedUserId{static_cast<int32_t>(0x7feb)};

/// @brief Field JoinFailedFoundInactiveJoiner offset 0xffffffff size 0x4
static constexpr int32_t  JoinFailedFoundInactiveJoiner{static_cast<int32_t>(0x7fed)};

/// @brief Field JoinFailedPeerAlreadyJoined offset 0xffffffff size 0x4
static constexpr int32_t  JoinFailedPeerAlreadyJoined{static_cast<int32_t>(0x7fee)};

/// @brief Field JoinFailedWithRejoinerNotFound offset 0xffffffff size 0x4
static constexpr int32_t  JoinFailedWithRejoinerNotFound{static_cast<int32_t>(0x7fec)};

/// @brief Field MaxCcuReached offset 0xffffffff size 0x4
static constexpr int32_t  MaxCcuReached{static_cast<int32_t>(0x7ff5)};

/// @brief Field NoRandomMatchFound offset 0xffffffff size 0x4
static constexpr int32_t  NoRandomMatchFound{static_cast<int32_t>(0x7ff8)};

/// @brief Field Ok offset 0xffffffff size 0x4
static constexpr int32_t  Ok{static_cast<int32_t>(0x0)};

/// @brief Field OperationLimitReached offset 0xffffffff size 0x4
static constexpr int32_t  OperationLimitReached{static_cast<int32_t>(0x7fe7)};

/// @brief Field OperationNotAllowedInCurrentState offset 0xffffffff size 0x4
static constexpr int32_t  OperationNotAllowedInCurrentState{static_cast<int32_t>(0xfffffffd)};

/// @brief Field PluginMismatch offset 0xffffffff size 0x4
static constexpr int32_t  PluginMismatch{static_cast<int32_t>(0x7fef)};

/// @brief Field PluginReportedError offset 0xffffffff size 0x4
static constexpr int32_t  PluginReportedError{static_cast<int32_t>(0x7ff0)};

/// @brief Field ServerFull offset 0xffffffff size 0x4
static constexpr int32_t  ServerFull{static_cast<int32_t>(0x7ffa)};

/// @brief Field SlotError offset 0xffffffff size 0x4
static constexpr int32_t  SlotError{static_cast<int32_t>(0x7fe6)};

/// @brief Field UserBlocked offset 0xffffffff size 0x4
static constexpr int32_t  UserBlocked{static_cast<int32_t>(0x7ff9)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28074};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::ErrorCode) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
