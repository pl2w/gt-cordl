#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDependencyResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckDependencyResolver)
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class LckDependencyResolver;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::LckDependencyResolver*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckDependencyResolver*, "Liv.Lck.DependencyInjection", "LckDependencyResolver");
// [DefaultExecutionOrder(-800)]
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckDependencyResolver
class CORDL_TYPE LckDependencyResolver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x9d33c54, size 0x114, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Liv::Lck::DependencyInjection::LckDependencyResolver* New_ctor() ;

/// @brief Method .ctor, addr 0x9d346f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDependencyResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDependencyResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDependencyResolver(LckDependencyResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDependencyResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDependencyResolver(LckDependencyResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24807};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::DependencyInjection::LckDependencyResolver) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
