#pragma once
// IWYU pragma private; include "GlobalNamespace/ParentedObjectStressTestMain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ParentedObjectStressTestMain)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ParentedObjectStressTestMain;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParentedObjectStressTestMain*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParentedObjectStressTestMain*, "", "ParentedObjectStressTestMain");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParentedObjectStressTestMain
class CORDL_TYPE ParentedObjectStressTestMain : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field NumObjects, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_NumObjects, put=__cordl_internal_set_NumObjects)) ::UnityEngine::Vector3  NumObjects;

/// @brief Field Object, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::UnityW<::UnityEngine::GameObject>  Object;

/// @brief Field Spacing, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_Spacing, put=__cordl_internal_set_Spacing)) ::UnityEngine::Vector3  Spacing;

static inline ::GlobalNamespace::ParentedObjectStressTestMain* New_ctor() ;

/// @brief Method Start, addr 0x55e5f68, size 0x1e4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_NumObjects() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_NumObjects() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Object() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Object() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Spacing() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Spacing() ;

constexpr void __cordl_internal_set_NumObjects(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Object(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_Spacing(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x55e614c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParentedObjectStressTestMain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParentedObjectStressTestMain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParentedObjectStressTestMain(ParentedObjectStressTestMain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParentedObjectStressTestMain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParentedObjectStressTestMain(ParentedObjectStressTestMain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20};

/// @brief Field Object, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Object;

/// @brief Field NumObjects, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___NumObjects;

/// @brief Field Spacing, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Spacing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParentedObjectStressTestMain, ___Object) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParentedObjectStressTestMain, ___NumObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParentedObjectStressTestMain, ___Spacing) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParentedObjectStressTestMain) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
