#pragma once
// IWYU pragma private; include "GlobalNamespace/GetPlayerDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDRequestData_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerDataRequest)
// Forward declare root types
namespace GlobalNamespace {
class GetPlayerDataRequest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GetPlayerDataRequest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetPlayerDataRequest*, "", "GetPlayerDataRequest");
// Dependencies KIDRequestData
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetPlayerDataRequest
class CORDL_TYPE GetPlayerDataRequest : public ::GlobalNamespace::KIDRequestData {
public:
// Declarations
static inline ::GlobalNamespace::GetPlayerDataRequest* New_ctor() ;

/// @brief Method .ctor, addr 0x5a262a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerDataRequest(GetPlayerDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerDataRequest(GetPlayerDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GetPlayerDataRequest) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
