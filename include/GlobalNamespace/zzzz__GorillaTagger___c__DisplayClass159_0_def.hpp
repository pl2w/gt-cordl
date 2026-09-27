#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger___c__DisplayClass159_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaTagger___c__DisplayClass159_0)
namespace GlobalNamespace {
class GorillaTagger;
}
namespace GlobalNamespace {
class NetPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaTagger___c__DisplayClass159_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0, "", "GorillaTagger/<>c__DisplayClass159_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagger/<>c__DisplayClass159_0
struct CORDL_TYPE GorillaTagger___c__DisplayClass159_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagger___c__DisplayClass159_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GorillaTagger>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bodyHit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftHandHit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "canTagHit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "canStunHit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "otherTouchedPlayer", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: None, comment: None }]
constexpr GorillaTagger___c__DisplayClass159_0(::UnityW<::GlobalNamespace::GorillaTagger>  __4__this, bool  bodyHit, bool  leftHandHit, bool  canTagHit, bool  canStunHit, ::GlobalNamespace::NetPlayer*  otherTouchedPlayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagger>  __4__this;

/// @brief Field bodyHit, offset: 0x8, size: 0x1, def value: None
 bool  bodyHit;

/// @brief Field leftHandHit, offset: 0x9, size: 0x1, def value: None
 bool  leftHandHit;

/// @brief Field canTagHit, offset: 0xa, size: 0x1, def value: None
 bool  canTagHit;

/// @brief Field canStunHit, offset: 0xb, size: 0x1, def value: None
 bool  canStunHit;

/// @brief Field otherTouchedPlayer, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  otherTouchedPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0, bodyHit) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0, leftHandHit) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0, canTagHit) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0, canStunHit) == 0xb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0, otherTouchedPlayer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger___c__DisplayClass159_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
