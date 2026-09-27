#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CoreCapacity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__AzureVmFamily_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CoreCapacity)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class CoreCapacity;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::CoreCapacity*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::CoreCapacity*, "PlayFab.MultiplayerModels", "CoreCapacity");
// Dependencies PlayFab.MultiplayerModels.AzureVmFamily, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.CoreCapacity
class CORDL_TYPE CoreCapacity : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Available, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Available, put=__cordl_internal_set_Available)) int32_t  Available;

/// @brief Field Region, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field Total, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Total, put=__cordl_internal_set_Total)) int32_t  Total;

/// @brief Field VmFamily, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_VmFamily, put=__cordl_internal_set_VmFamily)) ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily>  VmFamily;

static inline ::PlayFab::MultiplayerModels::CoreCapacity* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Available() const;

constexpr int32_t& __cordl_internal_get_Available() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr int32_t const& __cordl_internal_get_Total() const;

constexpr int32_t& __cordl_internal_get_Total() ;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily> const& __cordl_internal_get_VmFamily() const;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily>& __cordl_internal_get_VmFamily() ;

constexpr void __cordl_internal_set_Available(int32_t  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_Total(int32_t  value) ;

constexpr void __cordl_internal_set_VmFamily(::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily>  value) ;

/// @brief Method .ctor, addr 0xa840840, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreCapacity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreCapacity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreCapacity(CoreCapacity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreCapacity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreCapacity(CoreCapacity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19610};

/// @brief Field Available, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Available;

/// @brief Field Region, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field Total, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Total;

/// @brief Field VmFamily, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily>  ___VmFamily;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::CoreCapacity, ___Available) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CoreCapacity, ___Region) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CoreCapacity, ___Total) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::CoreCapacity, ___VmFamily) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::CoreCapacity) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
