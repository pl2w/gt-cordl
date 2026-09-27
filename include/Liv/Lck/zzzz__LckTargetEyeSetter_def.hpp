#pragma once
// IWYU pragma private; include "Liv/Lck/LckTargetEyeSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckTargetEyeSetter)
// Forward declare root types
namespace Liv::Lck {
class LckTargetEyeSetter;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckTargetEyeSetter*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckTargetEyeSetter*, "Liv.Lck", "LckTargetEyeSetter");
// [RequireComponent(typeof(UnityEngine.Camera))]
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckTargetEyeSetter
class CORDL_TYPE LckTargetEyeSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Liv::Lck::LckTargetEyeSetter* New_ctor() ;

/// @brief Method OnValidate, addr 0x9ce97c0, size 0x5c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method .ctor, addr 0x9ce981c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTargetEyeSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTargetEyeSetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTargetEyeSetter(LckTargetEyeSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTargetEyeSetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTargetEyeSetter(LckTargetEyeSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckTargetEyeSetter) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
