#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSturdyEnum`1_EnumPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GTSturdyEnum`1_EnumPair)
// Forward declare root types
namespace GlobalNamespace {
template<typename TEnum>
struct GTSturdyEnum_1_EnumPair;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::GTSturdyEnum_1_EnumPair);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::GTSturdyEnum_1_EnumPair, "", "GTSturdyEnum`1/EnumPair");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TEnum>
// Is value type: true
// CS Name: GTSturdyEnum`1/EnumPair<TEnum>
struct CORDL_TYPE GTSturdyEnum_1_EnumPair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTSturdyEnum_1_EnumPair() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "FallbackValue", ty: "TEnum", modifiers: "", def_value: None, comment: None }]
constexpr GTSturdyEnum_1_EnumPair(::StringW  Name, TEnum  FallbackValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field FallbackValue, offset: 0x8, size: 0x8, def value: None
 TEnum  FallbackValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
