#pragma once
// IWYU pragma private; include "GlobalNamespace/WindTunnelRibbonProcess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WindTunnelRibbonProcess)
// Forward declare root types
namespace GlobalNamespace {
class WindTunnelRibbonProcess;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WindTunnelRibbonProcess*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WindTunnelRibbonProcess*, "", "WindTunnelRibbonProcess");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WindTunnelRibbonProcess
class CORDL_TYPE WindTunnelRibbonProcess : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::WindTunnelRibbonProcess* New_ctor() ;

/// @brief Method Start, addr 0x5d14e30, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5d14e34, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5d14e38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindTunnelRibbonProcess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindTunnelRibbonProcess", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WindTunnelRibbonProcess(WindTunnelRibbonProcess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindTunnelRibbonProcess", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindTunnelRibbonProcess(WindTunnelRibbonProcess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{476};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WindTunnelRibbonProcess) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
