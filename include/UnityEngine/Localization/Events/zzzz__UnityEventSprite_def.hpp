#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Events/UnityEventSprite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(UnityEventSprite)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::Localization::Events {
class UnityEventSprite;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Events::UnityEventSprite*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Events::UnityEventSprite*, "UnityEngine.Localization.Events", "UnityEventSprite");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::Localization::Events {
// Is value type: false
// CS Name: UnityEngine.Localization.Events.UnityEventSprite
class CORDL_TYPE UnityEventSprite : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Sprite>> {
public:
// Declarations
static inline ::UnityEngine::Localization::Events::UnityEventSprite* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ec88, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventSprite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventSprite", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventSprite(UnityEventSprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventSprite", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventSprite(UnityEventSprite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Events::UnityEventSprite) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Events
