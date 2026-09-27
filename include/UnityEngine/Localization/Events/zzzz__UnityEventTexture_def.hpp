#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Events/UnityEventTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(UnityEventTexture)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Localization::Events {
class UnityEventTexture;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Events::UnityEventTexture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Events::UnityEventTexture*, "UnityEngine.Localization.Events", "UnityEventTexture");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::Localization::Events {
// Is value type: false
// CS Name: UnityEngine.Localization.Events.UnityEventTexture
class CORDL_TYPE UnityEventTexture : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Texture>> {
public:
// Declarations
static inline ::UnityEngine::Localization::Events::UnityEventTexture* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ed18, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventTexture(UnityEventTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventTexture(UnityEventTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Events::UnityEventTexture) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Events
