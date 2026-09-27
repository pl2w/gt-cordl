#pragma once
// IWYU pragma private; include "GorillaNetworking/CheckForBadNameRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CheckForBadNameRequest)
// Forward declare root types
namespace GorillaNetworking {
class CheckForBadNameRequest;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CheckForBadNameRequest*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CheckForBadNameRequest*, "GorillaNetworking", "CheckForBadNameRequest");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CheckForBadNameRequest
class CORDL_TYPE CheckForBadNameRequest : public ::System::Object {
public:
// Declarations
/// @brief Field forRoom, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_forRoom, put=__cordl_internal_set_forRoom)) bool  forRoom;

/// @brief Field forTroop, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_forTroop, put=__cordl_internal_set_forTroop)) bool  forTroop;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::GorillaNetworking::CheckForBadNameRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_forRoom() const;

constexpr bool& __cordl_internal_get_forRoom() ;

constexpr bool const& __cordl_internal_get_forTroop() const;

constexpr bool& __cordl_internal_get_forTroop() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_forRoom(bool  value) ;

constexpr void __cordl_internal_set_forTroop(bool  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c8c264, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckForBadNameRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckForBadNameRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckForBadNameRequest(CheckForBadNameRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckForBadNameRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckForBadNameRequest(CheckForBadNameRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4353};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field forRoom, offset: 0x18, size: 0x1, def value: None
 bool  ___forRoom;

/// @brief Field forTroop, offset: 0x19, size: 0x1, def value: None
 bool  ___forTroop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CheckForBadNameRequest, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CheckForBadNameRequest, ___forRoom) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CheckForBadNameRequest, ___forTroop) == 0x19, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CheckForBadNameRequest) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
