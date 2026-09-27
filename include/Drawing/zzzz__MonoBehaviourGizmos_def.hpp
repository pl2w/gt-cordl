#pragma once
// IWYU pragma private; include "Drawing/MonoBehaviourGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonoBehaviourGizmos)
namespace Drawing {
class IDrawGizmos;
}
// Forward declare root types
namespace Drawing {
class MonoBehaviourGizmos;
}
// Write type traits
MARK_REF_T(::Drawing::MonoBehaviourGizmos*);
DEFINE_IL2CPP_CLASS(::Drawing::MonoBehaviourGizmos*, "Drawing", "MonoBehaviourGizmos");
// Dependencies UnityEngine.MonoBehaviour
namespace Drawing {
// Is value type: false
// CS Name: Drawing.MonoBehaviourGizmos
class CORDL_TYPE MonoBehaviourGizmos : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to "::Drawing::IDrawGizmos"
constexpr operator  ::Drawing::IDrawGizmos*() noexcept;

/// @brief Method DrawGizmos, addr 0x55da560, size 0x4, virtual true, abstract: false, final false
inline void DrawGizmos() ;

static inline ::Drawing::MonoBehaviourGizmos* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x55da55c, size 0x4, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method .ctor, addr 0x55da554, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Drawing::IDrawGizmos"
constexpr ::Drawing::IDrawGizmos* i___Drawing__IDrawGizmos() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviourGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourGizmos(MonoBehaviourGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourGizmos(MonoBehaviourGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::MonoBehaviourGizmos) == 0x20, "Size mismatch!");

} // namespace end def Drawing
