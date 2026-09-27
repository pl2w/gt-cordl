#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTimeResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
CORDL_MODULE_EXPORT(GetTimeResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTimeResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTimeResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTimeResult*, "PlayFab.ClientModels", "GetTimeResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTimeResult
class CORDL_TYPE GetTimeResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Time, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Time, put=__cordl_internal_set_Time)) ::System::DateTime  Time;

static inline ::PlayFab::ClientModels::GetTimeResult* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get_Time() const;

constexpr ::System::DateTime& __cordl_internal_get_Time() ;

constexpr void __cordl_internal_set_Time(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0xa84de40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTimeResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTimeResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTimeResult(GetTimeResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTimeResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTimeResult(GetTimeResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20087};

/// @brief Field Time, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTimeResult, ___Time) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTimeResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
