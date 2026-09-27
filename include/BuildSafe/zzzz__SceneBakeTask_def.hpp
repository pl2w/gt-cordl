#pragma once
// IWYU pragma private; include "BuildSafe/SceneBakeTask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BuildSafe/zzzz__SceneBakeMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneBakeTask)
namespace BuildSafe {
struct SceneBakeMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace BuildSafe {
class SceneBakeTask;
}
// Write type traits
MARK_REF_T(::BuildSafe::SceneBakeTask*);
DEFINE_IL2CPP_CLASS(::BuildSafe::SceneBakeTask*, "BuildSafe", "SceneBakeTask");
// Dependencies BuildSafe.SceneBakeMode, UnityEngine.MonoBehaviour
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.SceneBakeTask
class CORDL_TYPE SceneBakeTask : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_bakeMode, put=set_bakeMode)) ::BuildSafe::SceneBakeMode  bakeMode;

 __declspec(property(get=get_callbackOrder, put=set_callbackOrder)) int32_t  callbackOrder;

/// @brief Field m_bakeMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_bakeMode, put=__cordl_internal_set_m_bakeMode)) ::BuildSafe::SceneBakeMode  m_bakeMode;

/// @brief Field m_callbackOrder, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_callbackOrder, put=__cordl_internal_set_m_callbackOrder)) int32_t  m_callbackOrder;

/// @brief Field m_runIfInactive, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_runIfInactive, put=__cordl_internal_set_m_runIfInactive)) bool  m_runIfInactive;

 __declspec(property(get=get_runIfInactive, put=set_runIfInactive)) bool  runIfInactive;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method ForceRun, addr 0x5c4f428, size 0x4, virtual false, abstract: false, final false
inline void ForceRun() ;

static inline ::BuildSafe::SceneBakeTask* New_ctor() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method OnSceneBake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSceneBake(::UnityEngine::SceneManagement::Scene  scene, ::BuildSafe::SceneBakeMode  mode) ;

constexpr ::BuildSafe::SceneBakeMode const& __cordl_internal_get_m_bakeMode() const;

constexpr ::BuildSafe::SceneBakeMode& __cordl_internal_get_m_bakeMode() ;

constexpr int32_t const& __cordl_internal_get_m_callbackOrder() const;

constexpr int32_t& __cordl_internal_get_m_callbackOrder() ;

constexpr bool const& __cordl_internal_get_m_runIfInactive() const;

constexpr bool& __cordl_internal_get_m_runIfInactive() ;

constexpr void __cordl_internal_set_m_bakeMode(::BuildSafe::SceneBakeMode  value) ;

constexpr void __cordl_internal_set_m_callbackOrder(int32_t  value) ;

constexpr void __cordl_internal_set_m_runIfInactive(bool  value) ;

/// @brief Method .ctor, addr 0x5c4f3e8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bakeMode, addr 0x5c4f3f8, size 0x8, virtual false, abstract: false, final false
inline ::BuildSafe::SceneBakeMode get_bakeMode() ;

/// @brief Method get_callbackOrder, addr 0x5c4f408, size 0x8, virtual true, abstract: false, final false
inline int32_t get_callbackOrder() ;

/// @brief Method get_runIfInactive, addr 0x5c4f418, size 0x8, virtual false, abstract: false, final false
inline bool get_runIfInactive() ;

/// @brief Method set_bakeMode, addr 0x5c4f400, size 0x8, virtual false, abstract: false, final false
inline void set_bakeMode(::BuildSafe::SceneBakeMode  value) ;

/// @brief Method set_callbackOrder, addr 0x5c4f410, size 0x8, virtual true, abstract: false, final false
inline void set_callbackOrder(int32_t  value) ;

/// @brief Method set_runIfInactive, addr 0x5c4f420, size 0x8, virtual false, abstract: false, final false
inline void set_runIfInactive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneBakeTask() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneBakeTask", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneBakeTask(SceneBakeTask && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneBakeTask", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneBakeTask(SceneBakeTask const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4259};

/// [SerializeField]
/// @brief Field m_bakeMode, offset: 0x20, size: 0x4, def value: None
 ::BuildSafe::SceneBakeMode  ___m_bakeMode;

/// [SerializeField]
/// @brief Field m_callbackOrder, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_callbackOrder;

/// [Space]
/// [SerializeField]
/// @brief Field m_runIfInactive, offset: 0x28, size: 0x1, def value: None
 bool  ___m_runIfInactive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BuildSafe::SceneBakeTask, ___m_bakeMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BuildSafe::SceneBakeTask, ___m_callbackOrder) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BuildSafe::SceneBakeTask, ___m_runIfInactive) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BuildSafe::SceneBakeTask) == 0x30, "Size mismatch!");

} // namespace end def BuildSafe
