#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_OnlineFunctions_CachedOfferDelta.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bindings_OnlineFunctions_CachedOfferDelta)
// Forward declare root types
namespace GlobalNamespace {
struct OnlineFunctions_Bindings_CachedOfferDelta;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta, "", "Bindings/OnlineFunctions/CachedOfferDelta");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/OnlineFunctions/CachedOfferDelta
struct CORDL_TYPE OnlineFunctions_Bindings_CachedOfferDelta {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OnlineFunctions_Bindings_CachedOfferDelta() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Change", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisplayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisplayDescription", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr OnlineFunctions_Bindings_CachedOfferDelta(::StringW  Name, int32_t  Change, ::StringW  DisplayName, ::StringW  DisplayDescription) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Change, offset: 0x8, size: 0x4, def value: None
 int32_t  Change;

/// @brief Field DisplayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  DisplayName;

/// @brief Field DisplayDescription, offset: 0x18, size: 0x8, def value: None
 ::StringW  DisplayDescription;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta, Change) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta, DisplayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta, DisplayDescription) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnlineFunctions_Bindings_CachedOfferDelta) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
