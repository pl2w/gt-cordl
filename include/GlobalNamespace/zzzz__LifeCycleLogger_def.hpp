#pragma once
// IWYU pragma private; include "GlobalNamespace/LifeCycleLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LifeCycleLogger)
// Forward declare root types
namespace GlobalNamespace {
class LifeCycleLogger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LifeCycleLogger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LifeCycleLogger*, "", "LifeCycleLogger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LifeCycleLogger
class CORDL_TYPE LifeCycleLogger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5987790, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::LifeCycleLogger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5987a00, size 0x9c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5987964, size 0x9c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59878c8, size 0x9c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x598782c, size 0x9c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x5987a9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LifeCycleLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LifeCycleLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LifeCycleLogger(LifeCycleLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LifeCycleLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LifeCycleLogger(LifeCycleLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2554};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LifeCycleLogger) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
