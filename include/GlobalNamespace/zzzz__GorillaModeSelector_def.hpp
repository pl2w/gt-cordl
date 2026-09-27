#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaModeSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaModeSelector)
// Forward declare root types
namespace GlobalNamespace {
class GorillaModeSelector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaModeSelector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaModeSelector*, "", "GorillaModeSelector");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaModeSelector
class CORDL_TYPE GorillaModeSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaModeSelector* New_ctor() ;

/// @brief Method Start, addr 0x5919e44, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5919e48, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5919e4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaModeSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaModeSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaModeSelector(GorillaModeSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaModeSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaModeSelector(GorillaModeSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaModeSelector) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
