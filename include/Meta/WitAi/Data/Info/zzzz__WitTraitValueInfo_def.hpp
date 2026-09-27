#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitTraitValueInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WitTraitValueInfo)
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitTraitValueInfo;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitTraitValueInfo);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitTraitValueInfo, "Meta.WitAi.Data.Info", "WitTraitValueInfo");
// Dependencies 
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitTraitValueInfo
struct CORDL_TYPE WitTraitValueInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WitTraitValueInfo() ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr WitTraitValueInfo(::StringW  id, ::StringW  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field id, offset: 0x0, size: 0x8, def value: None
 ::StringW  id;

/// [SerializeField]
/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::StringW  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitTraitValueInfo, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitTraitValueInfo, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitTraitValueInfo) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info
