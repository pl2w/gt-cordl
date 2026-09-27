#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/OverrideDouble.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OverrideDouble)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class OverrideDouble;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::OverrideDouble*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::OverrideDouble*, "PlayFab.MultiplayerModels", "OverrideDouble");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.OverrideDouble
class CORDL_TYPE OverrideDouble : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) double_t  Value;

static inline ::PlayFab::MultiplayerModels::OverrideDouble* New_ctor() ;

constexpr double_t const& __cordl_internal_get_Value() const;

constexpr double_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Value(double_t  value) ;

/// @brief Method .ctor, addr 0xa840b98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverrideDouble() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverrideDouble", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OverrideDouble(OverrideDouble && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverrideDouble", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverrideDouble(OverrideDouble const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19718};

/// @brief Field Value, offset: 0x10, size: 0x8, def value: None
 double_t  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::OverrideDouble, ___Value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::OverrideDouble) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
