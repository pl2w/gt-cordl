#pragma once
// IWYU pragma private; include "Modio/Monetization/PortalSku.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPI_Portal_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PortalSku)
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
// Forward declare root types
namespace Modio::Monetization {
struct PortalSku;
}
// Write type traits
MARK_VAL_T(::Modio::Monetization::PortalSku);
DEFINE_IL2CPP_CLASS(::Modio::Monetization::PortalSku, "Modio.Monetization", "PortalSku");
// Dependencies Modio.API.ModioAPI::Portal
namespace Modio::Monetization {
// Is value type: true
// CS Name: Modio.Monetization.PortalSku
struct CORDL_TYPE PortalSku {
public:
// Declarations
/// @brief Method .ctor, addr 0xa0268b4, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ModioAPI_Portal  portal, ::StringW  sku, ::StringW  name, ::StringW  formattedPrice, int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PortalSku() ;

// Ctor Parameters [CppParam { name: "Portal", ty: "::GlobalNamespace::ModioAPI_Portal", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sku", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "FormattedPrice", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PortalSku(::GlobalNamespace::ModioAPI_Portal  Portal, ::StringW  Sku, ::StringW  Name, ::StringW  FormattedPrice, int32_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Portal, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::ModioAPI_Portal  Portal;

/// @brief Field Sku, offset: 0x8, size: 0x8, def value: None
 ::StringW  Sku;

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field FormattedPrice, offset: 0x18, size: 0x8, def value: None
 ::StringW  FormattedPrice;

/// @brief Field Value, offset: 0x20, size: 0x4, def value: None
 int32_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Monetization::PortalSku, Portal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::Monetization::PortalSku, Sku) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::Monetization::PortalSku, Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Monetization::PortalSku, FormattedPrice) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Monetization::PortalSku, Value) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Monetization::PortalSku) == 0x28, "Size mismatch!");

} // namespace end def Modio::Monetization
