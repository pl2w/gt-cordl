#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDoNotUpgrade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CinemachineDoNotUpgrade)
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineDoNotUpgrade;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineDoNotUpgrade*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDoNotUpgrade*, "Unity.Cinemachine", "CinemachineDoNotUpgrade");
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDoNotUpgrade
class CORDL_TYPE CinemachineDoNotUpgrade : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Unity::Cinemachine::CinemachineDoNotUpgrade* New_ctor() ;

/// @brief Method .ctor, addr 0xaecc0a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDoNotUpgrade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDoNotUpgrade", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDoNotUpgrade(CinemachineDoNotUpgrade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDoNotUpgrade", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDoNotUpgrade(CinemachineDoNotUpgrade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineDoNotUpgrade) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
