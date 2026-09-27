#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeChanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NativeSizeChanger)
namespace GlobalNamespace {
class NativeSizeChangerSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class NativeSizeChanger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NativeSizeChanger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeSizeChanger*, "", "NativeSizeChanger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NativeSizeChanger
class CORDL_TYPE NativeSizeChanger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Activate, addr 0x56d3920, size 0xd0, virtual false, abstract: false, final false
inline void Activate(::GlobalNamespace::NativeSizeChangerSettings*  settings) ;

static inline ::GlobalNamespace::NativeSizeChanger* New_ctor() ;

/// @brief Method .ctor, addr 0x56d39f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeSizeChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeChanger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeSizeChanger(NativeSizeChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeSizeChanger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeSizeChanger(NativeSizeChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1067};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NativeSizeChanger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
