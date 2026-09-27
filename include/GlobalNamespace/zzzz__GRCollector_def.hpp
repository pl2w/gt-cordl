#pragma once
// IWYU pragma private; include "GlobalNamespace/GRCollector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRCollector)
// Forward declare root types
namespace GlobalNamespace {
class GRCollector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRCollector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRCollector*, "", "GRCollector");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRCollector
class CORDL_TYPE GRCollector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x587538c, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRCollector* New_ctor() ;

/// @brief Method .ctor, addr 0x5875390, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRCollector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRCollector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRCollector(GRCollector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRCollector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRCollector(GRCollector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1900};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRCollector) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
