#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StatisticNameVersion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatisticNameVersion)
// Forward declare root types
namespace PlayFab::ClientModels {
class StatisticNameVersion;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::StatisticNameVersion*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::StatisticNameVersion*, "PlayFab.ClientModels", "StatisticNameVersion");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.StatisticNameVersion
class CORDL_TYPE StatisticNameVersion : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field StatisticName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field Version, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) uint32_t  Version;

static inline ::PlayFab::ClientModels::StatisticNameVersion* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr uint32_t const& __cordl_internal_get_Version() const;

constexpr uint32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_Version(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa84e278, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatisticNameVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatisticNameVersion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StatisticNameVersion(StatisticNameVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatisticNameVersion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatisticNameVersion(StatisticNameVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20227};

/// @brief Field StatisticName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field Version, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::StatisticNameVersion, ___StatisticName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StatisticNameVersion, ___Version) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::StatisticNameVersion) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
