#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StatisticUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatisticUpdate)
// Forward declare root types
namespace PlayFab::ClientModels {
class StatisticUpdate;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::StatisticUpdate*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::StatisticUpdate*, "PlayFab.ClientModels", "StatisticUpdate");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.StatisticUpdate
class CORDL_TYPE StatisticUpdate : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field StatisticName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field Value, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) int32_t  Value;

/// @brief Field Version, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) ::System::Nullable_1<uint32_t>  Version;

static inline ::PlayFab::ClientModels::StatisticUpdate* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr int32_t const& __cordl_internal_get_Value() const;

constexpr int32_t& __cordl_internal_get_Value() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_Version() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_Value(int32_t  value) ;

constexpr void __cordl_internal_set_Version(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method .ctor, addr 0xa84e280, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatisticUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatisticUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StatisticUpdate(StatisticUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatisticUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatisticUpdate(StatisticUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20228};

/// @brief Field StatisticName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field Value, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Value;

/// @brief Field Version, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___Version;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::StatisticUpdate, ___StatisticName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StatisticUpdate, ___Value) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StatisticUpdate, ___Version) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::StatisticUpdate) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
