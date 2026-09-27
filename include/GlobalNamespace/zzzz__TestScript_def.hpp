#pragma once
// IWYU pragma private; include "GlobalNamespace/TestScript.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestScript)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TestScript;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestScript*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestScript*, "", "TestScript");
// [GTStripGameObjectFromBuild("!QATESTING")]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestScript
class CORDL_TYPE TestScript : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_callbackOrder)) int32_t  callbackOrder;

/// @brief Field testDelete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_testDelete, put=__cordl_internal_set_testDelete)) ::UnityW<::UnityEngine::GameObject>  testDelete;

static inline ::GlobalNamespace::TestScript* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_testDelete() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_testDelete() ;

constexpr void __cordl_internal_set_testDelete(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5ae0054, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsUIOpen, addr 0x5adf4e0, size 0x8, virtual false, abstract: false, final false
static inline bool get_IsUIOpen() ;

/// @brief Method get_callbackOrder, addr 0x5ae004c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_callbackOrder() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestScript() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestScript", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestScript(TestScript && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestScript", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestScript(TestScript const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3447};

/// @brief Field testDelete, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___testDelete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestScript, ___testDelete) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestScript) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
