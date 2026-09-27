#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/OverrideUnsignedInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OverrideUnsignedInt)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class OverrideUnsignedInt;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::OverrideUnsignedInt*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::OverrideUnsignedInt*, "PlayFab.MultiplayerModels", "OverrideUnsignedInt");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.OverrideUnsignedInt
class CORDL_TYPE OverrideUnsignedInt : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Value, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) uint32_t  Value;

static inline ::PlayFab::MultiplayerModels::OverrideUnsignedInt* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get_Value() const;

constexpr uint32_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Value(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa840ba0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverrideUnsignedInt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverrideUnsignedInt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OverrideUnsignedInt(OverrideUnsignedInt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverrideUnsignedInt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverrideUnsignedInt(OverrideUnsignedInt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19719};

/// @brief Field Value, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::OverrideUnsignedInt, ___Value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::OverrideUnsignedInt) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
