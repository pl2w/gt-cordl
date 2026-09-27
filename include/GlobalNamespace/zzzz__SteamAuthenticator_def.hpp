#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamAuthenticator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HAuthTicket_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamAuthenticator)
namespace GlobalNamespace {
class SteamAuthenticator___c__DisplayClass0_0;
}
namespace GlobalNamespace {
class SteamAuthenticator___c__DisplayClass1_0;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct EResult;
}
namespace Steamworks {
struct GetAuthSessionTicketResponse_t;
}
namespace Steamworks {
struct GetTicketForWebApiResponse_t;
}
namespace Steamworks {
struct HAuthTicket;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamAuthenticator;
}
namespace GlobalNamespace {
class SteamAuthenticator___c__DisplayClass0_0;
}
namespace GlobalNamespace {
class SteamAuthenticator___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamAuthenticator*);
MARK_REF_T(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0*);
MARK_REF_T(::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamAuthenticator*, "", "SteamAuthenticator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0*, "", "SteamAuthenticator/<>c__DisplayClass0_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0*, "", "SteamAuthenticator/<>c__DisplayClass1_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamAuthenticator
class CORDL_TYPE SteamAuthenticator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass0_0 = ::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0;

using __c__DisplayClass1_0 = ::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0;

/// @brief Method GetAuthTicket, addr 0x5ab281c, size 0x218, virtual false, abstract: false, final false
inline ::Steamworks::HAuthTicket GetAuthTicket(::System::Action_1<::StringW>*  successCallback, ::System::Action_1<::Steamworks::EResult>*  failureCallback) ;

/// @brief Method GetAuthTicketForWebApi, addr 0x5ab2a3c, size 0x1a8, virtual false, abstract: false, final false
inline ::Steamworks::HAuthTicket GetAuthTicketForWebApi(::StringW  authenticatorId, ::System::Action_1<::StringW>*  successCallback, ::System::Action_1<::Steamworks::EResult>*  failureCallback) ;

static inline ::GlobalNamespace::SteamAuthenticator* New_ctor() ;

/// @brief Method .ctor, addr 0x5ab2bec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAuthenticator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthenticator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAuthenticator(SteamAuthenticator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthenticator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAuthenticator(SteamAuthenticator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SteamAuthenticator) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies Steamworks.HAuthTicket, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamAuthenticator/<>c__DisplayClass1_0
class CORDL_TYPE SteamAuthenticator___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field failureCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureCallback, put=__cordl_internal_set_failureCallback)) ::System::Action_1<::Steamworks::EResult>*  failureCallback;

/// @brief Field successCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::StringW>*  successCallback;

/// @brief Field ticketCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ticketCallback, put=__cordl_internal_set_ticketCallback)) ::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>*  ticketCallback;

/// @brief Field ticketHandle, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ticketHandle, put=__cordl_internal_set_ticketHandle)) ::Steamworks::HAuthTicket  ticketHandle;

static inline ::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <GetAuthTicketForWebApi>b__0, addr 0x5ab2dc8, size 0x1d8, virtual false, abstract: false, final false
inline void _GetAuthTicketForWebApi_b__0(::Steamworks::GetTicketForWebApiResponse_t  response) ;

constexpr ::System::Action_1<::Steamworks::EResult>* const& __cordl_internal_get_failureCallback() const;

constexpr ::System::Action_1<::Steamworks::EResult>*& __cordl_internal_get_failureCallback() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_successCallback() ;

constexpr ::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>* const& __cordl_internal_get_ticketCallback() const;

constexpr ::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>*& __cordl_internal_get_ticketCallback() ;

constexpr ::Steamworks::HAuthTicket const& __cordl_internal_get_ticketHandle() const;

constexpr ::Steamworks::HAuthTicket& __cordl_internal_get_ticketHandle() ;

constexpr void __cordl_internal_set_failureCallback(::System::Action_1<::Steamworks::EResult>*  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_ticketCallback(::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>*  value) ;

constexpr void __cordl_internal_set_ticketHandle(::Steamworks::HAuthTicket  value) ;

/// @brief Method .ctor, addr 0x5ab2be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAuthenticator___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthenticator___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAuthenticator___c__DisplayClass1_0(SteamAuthenticator___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthenticator___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAuthenticator___c__DisplayClass1_0(SteamAuthenticator___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3298};

/// @brief Field ticketHandle, offset: 0x10, size: 0x4, def value: None
 ::Steamworks::HAuthTicket  ___ticketHandle;

/// @brief Field ticketCallback, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::GetTicketForWebApiResponse_t>*  ___ticketCallback;

/// @brief Field failureCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Steamworks::EResult>*  ___failureCallback;

/// @brief Field successCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___successCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0, ___ticketHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0, ___ticketCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0, ___failureCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0, ___successCallback) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass1_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies Steamworks.HAuthTicket, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamAuthenticator/<>c__DisplayClass0_0
class CORDL_TYPE SteamAuthenticator___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field failureCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_failureCallback, put=__cordl_internal_set_failureCallback)) ::System::Action_1<::Steamworks::EResult>*  failureCallback;

/// @brief Field successCallback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::StringW>*  successCallback;

/// @brief Field ticketBlob, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ticketBlob, put=__cordl_internal_set_ticketBlob)) ::ArrayW<uint8_t>  ticketBlob;

/// @brief Field ticketCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ticketCallback, put=__cordl_internal_set_ticketCallback)) ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*  ticketCallback;

/// @brief Field ticketHandle, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ticketHandle, put=__cordl_internal_set_ticketHandle)) ::Steamworks::HAuthTicket  ticketHandle;

/// @brief Field ticketSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ticketSize, put=__cordl_internal_set_ticketSize)) uint32_t  ticketSize;

static inline ::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <GetAuthTicket>b__0, addr 0x5ab2bf4, size 0x1d4, virtual false, abstract: false, final false
inline void _GetAuthTicket_b__0(::Steamworks::GetAuthSessionTicketResponse_t  response) ;

constexpr ::System::Action_1<::Steamworks::EResult>* const& __cordl_internal_get_failureCallback() const;

constexpr ::System::Action_1<::Steamworks::EResult>*& __cordl_internal_get_failureCallback() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_successCallback() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_ticketBlob() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_ticketBlob() ;

constexpr ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>* const& __cordl_internal_get_ticketCallback() const;

constexpr ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*& __cordl_internal_get_ticketCallback() ;

constexpr ::Steamworks::HAuthTicket const& __cordl_internal_get_ticketHandle() const;

constexpr ::Steamworks::HAuthTicket& __cordl_internal_get_ticketHandle() ;

constexpr uint32_t const& __cordl_internal_get_ticketSize() const;

constexpr uint32_t& __cordl_internal_get_ticketSize() ;

constexpr void __cordl_internal_set_failureCallback(::System::Action_1<::Steamworks::EResult>*  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_ticketBlob(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_ticketCallback(::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*  value) ;

constexpr void __cordl_internal_set_ticketHandle(::Steamworks::HAuthTicket  value) ;

constexpr void __cordl_internal_set_ticketSize(uint32_t  value) ;

/// @brief Method .ctor, addr 0x5ab2a34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAuthenticator___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthenticator___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAuthenticator___c__DisplayClass0_0(SteamAuthenticator___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAuthenticator___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAuthenticator___c__DisplayClass0_0(SteamAuthenticator___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3297};

/// @brief Field ticketHandle, offset: 0x10, size: 0x4, def value: None
 ::Steamworks::HAuthTicket  ___ticketHandle;

/// @brief Field ticketCallback, offset: 0x18, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::GetAuthSessionTicketResponse_t>*  ___ticketCallback;

/// @brief Field failureCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Steamworks::EResult>*  ___failureCallback;

/// @brief Field ticketBlob, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___ticketBlob;

/// @brief Field ticketSize, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___ticketSize;

/// @brief Field successCallback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___successCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0, ___ticketHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0, ___ticketCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0, ___failureCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0, ___ticketBlob) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0, ___ticketSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0, ___successCallback) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamAuthenticator___c__DisplayClass0_0) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
