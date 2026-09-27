#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagCauldronColorer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlagCauldronColorer_ColorMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FlagCauldronColorer)
namespace GlobalNamespace {
struct FlagCauldronColorer_ColorMode;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FlagCauldronColorer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlagCauldronColorer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlagCauldronColorer*, "", "FlagCauldronColorer");
// Dependencies FlagCauldronColorer::ColorMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlagCauldronColorer
class CORDL_TYPE FlagCauldronColorer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColorMode = ::GlobalNamespace::FlagCauldronColorer_ColorMode;

/// @brief Field colorPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorPoint, put=__cordl_internal_set_colorPoint)) ::UnityW<::UnityEngine::Transform>  colorPoint;

/// @brief Field mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::FlagCauldronColorer_ColorMode  mode;

static inline ::GlobalNamespace::FlagCauldronColorer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_colorPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_colorPoint() ;

constexpr ::GlobalNamespace::FlagCauldronColorer_ColorMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::FlagCauldronColorer_ColorMode& __cordl_internal_get_mode() ;

constexpr void __cordl_internal_set_colorPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::FlagCauldronColorer_ColorMode  value) ;

/// @brief Method .ctor, addr 0x56743e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlagCauldronColorer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlagCauldronColorer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlagCauldronColorer(FlagCauldronColorer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlagCauldronColorer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlagCauldronColorer(FlagCauldronColorer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{827};

/// @brief Field mode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::FlagCauldronColorer_ColorMode  ___mode;

/// @brief Field colorPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___colorPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlagCauldronColorer, ___mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlagCauldronColorer, ___colorPoint) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlagCauldronColorer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
