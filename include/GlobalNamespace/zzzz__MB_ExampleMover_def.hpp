#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_ExampleMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_ExampleMover)
// Forward declare root types
namespace GlobalNamespace {
class MB_ExampleMover;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_ExampleMover*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_ExampleMover*, "", "MB_ExampleMover");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_ExampleMover
class CORDL_TYPE MB_ExampleMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field axis, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_axis, put=__cordl_internal_set_axis)) int32_t  axis;

static inline ::GlobalNamespace::MB_ExampleMover* New_ctor() ;

/// @brief Method Update, addr 0x9dfd750, size 0xd8, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_axis() const;

constexpr int32_t& __cordl_internal_get_axis() ;

constexpr void __cordl_internal_set_axis(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dfd828, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_ExampleMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_ExampleMover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_ExampleMover(MB_ExampleMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_ExampleMover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_ExampleMover(MB_ExampleMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32362};

/// @brief Field axis, offset: 0x20, size: 0x4, def value: None
 int32_t  ___axis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_ExampleMover, ___axis) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_ExampleMover) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
