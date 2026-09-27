#pragma once
// IWYU pragma private; include "Drawing/Examples/BurstExample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BurstExample)
namespace GlobalNamespace {
struct BurstExample_DrawingJob;
}
// Forward declare root types
namespace Drawing::Examples {
class BurstExample;
}
// Write type traits
MARK_REF_T(::Drawing::Examples::BurstExample*);
DEFINE_IL2CPP_CLASS(::Drawing::Examples::BurstExample*, "Drawing.Examples", "BurstExample");
// Dependencies UnityEngine.MonoBehaviour
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.BurstExample
class CORDL_TYPE BurstExample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DrawingJob = ::GlobalNamespace::BurstExample_DrawingJob;

static inline ::Drawing::Examples::BurstExample* New_ctor() ;

/// @brief Method Update, addr 0x55e1a14, size 0x150, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x55e1b64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstExample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstExample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstExample(BurstExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstExample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstExample(BurstExample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27787};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Examples::BurstExample) == 0x20, "Size mismatch!");

} // namespace end def Drawing::Examples
