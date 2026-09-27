#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateUserDataResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateUserDataResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdateUserDataResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdateUserDataResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdateUserDataResult*, "PlayFab.ClientModels", "UpdateUserDataResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdateUserDataResult
class CORDL_TYPE UpdateUserDataResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field DataVersion, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_DataVersion, put=__cordl_internal_set_DataVersion)) uint32_t  DataVersion;

static inline ::PlayFab::ClientModels::UpdateUserDataResult* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get_DataVersion() const;

constexpr uint32_t& __cordl_internal_get_DataVersion() ;

constexpr void __cordl_internal_set_DataVersion(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa84e440, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateUserDataResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserDataResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateUserDataResult(UpdateUserDataResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateUserDataResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateUserDataResult(UpdateUserDataResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20288};

/// @brief Field DataVersion, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___DataVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UpdateUserDataResult, ___DataVersion) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UpdateUserDataResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
