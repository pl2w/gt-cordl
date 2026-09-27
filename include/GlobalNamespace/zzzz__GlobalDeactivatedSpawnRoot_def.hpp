#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalDeactivatedSpawnRoot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlobalDeactivatedSpawnRoot)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalDeactivatedSpawnRoot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GlobalDeactivatedSpawnRoot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GlobalDeactivatedSpawnRoot*, "", "GlobalDeactivatedSpawnRoot");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlobalDeactivatedSpawnRoot
class CORDL_TYPE GlobalDeactivatedSpawnRoot : public ::System::Object {
public:
// Declarations
/// @brief Field _xform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__xform, put=setStaticF__xform)) ::UnityW<::UnityEngine::Transform>  _xform;

/// @brief Method GetOrCreate, addr 0x5668814, size 0x184, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetOrCreate() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__xform() ;

static inline void setStaticF__xform(::UnityW<::UnityEngine::Transform>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalDeactivatedSpawnRoot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalDeactivatedSpawnRoot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalDeactivatedSpawnRoot(GlobalDeactivatedSpawnRoot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalDeactivatedSpawnRoot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalDeactivatedSpawnRoot(GlobalDeactivatedSpawnRoot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{786};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GlobalDeactivatedSpawnRoot) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
