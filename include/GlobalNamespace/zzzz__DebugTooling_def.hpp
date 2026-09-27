#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugTooling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DebugTooling)
namespace GlobalNamespace {
struct DebugTooling_DebugScreen;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugTooling;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugTooling*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugTooling*, "", "DebugTooling");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugTooling
class CORDL_TYPE DebugTooling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DebugScreen = ::GlobalNamespace::DebugTooling_DebugScreen;

static inline ::GlobalNamespace::DebugTooling* New_ctor() ;

/// @brief Method .ctor, addr 0x5799310, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugTooling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugTooling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugTooling(DebugTooling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugTooling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugTooling(DebugTooling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DebugTooling) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
