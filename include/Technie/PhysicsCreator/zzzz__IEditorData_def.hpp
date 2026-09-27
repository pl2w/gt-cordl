#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/IEditorData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IEditorData)
namespace Technie::PhysicsCreator {
class Hash160;
}
namespace Technie::PhysicsCreator {
class IHull;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class IEditorData;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::IEditorData*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::IEditorData*, "Technie.PhysicsCreator", "IEditorData");
// Dependencies 
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.IEditorData
class CORDL_TYPE IEditorData {
public:
// Declarations
 __declspec(property(get=get_CachedHash, put=set_CachedHash)) ::Technie::PhysicsCreator::Hash160*  CachedHash;

 __declspec(property(get=get_HasCachedData)) bool  HasCachedData;

 __declspec(property(get=get_HasSuppressMeshModificationWarning)) bool  HasSuppressMeshModificationWarning;

 __declspec(property(get=get_Hulls)) ::ArrayW<::Technie::PhysicsCreator::IHull*>  Hulls;

 __declspec(property(get=get_SourceMesh)) ::UnityW<::UnityEngine::Mesh>  SourceMesh;

/// @brief Method SetAssetDirty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetAssetDirty() ;

/// @brief Method get_CachedHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Technie::PhysicsCreator::Hash160* get_CachedHash() ;

/// @brief Method get_HasCachedData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasCachedData() ;

/// @brief Method get_HasSuppressMeshModificationWarning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasSuppressMeshModificationWarning() ;

/// @brief Method get_Hulls, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::Technie::PhysicsCreator::IHull*> get_Hulls() ;

/// @brief Method get_SourceMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Mesh> get_SourceMesh() ;

/// @brief Method set_CachedHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_CachedHash(::Technie::PhysicsCreator::Hash160*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IEditorData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEditorData(IEditorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30500};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Technie::PhysicsCreator
