#pragma once
// IWYU pragma private; include "GlobalNamespace/DestroyIfNotQA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DestroyIfNotQA)
// Forward declare root types
namespace GlobalNamespace {
class DestroyIfNotQA;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DestroyIfNotQA*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DestroyIfNotQA*, "", "DestroyIfNotQA");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DestroyIfNotQA
class CORDL_TYPE DestroyIfNotQA : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x579928c, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::DestroyIfNotQA* New_ctor() ;

/// @brief Method .ctor, addr 0x57992f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DestroyIfNotQA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DestroyIfNotQA", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DestroyIfNotQA(DestroyIfNotQA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DestroyIfNotQA", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DestroyIfNotQA(DestroyIfNotQA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DestroyIfNotQA) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
