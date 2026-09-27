#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/IHull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IHull)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class IHull;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::IHull*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::IHull*, "Technie.PhysicsCreator", "IHull");
// Dependencies 
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.IHull
class CORDL_TYPE IHull {
public:
// Declarations
 __declspec(property(get=get_CachedTriangleVertices, put=set_CachedTriangleVertices)) ::ArrayW<::UnityEngine::Vector3>  CachedTriangleVertices;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NumSelectedTriangles)) int32_t  NumSelectedTriangles;

/// @brief Method ClearSelectedFaces, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearSelectedFaces() ;

/// @brief Method GetSelectedFaces, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<int32_t> GetSelectedFaces() ;

/// @brief Method IsTriangleSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsTriangleSelected(int32_t  triIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Mesh*  targetMesh) ;

/// @brief Method SetSelectedFaces, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetSelectedFaces(::System::Collections::Generic::List_1<int32_t>*  newSelectedFaceIndices, ::UnityEngine::Mesh*  srcMesh) ;

/// @brief Method get_CachedTriangleVertices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<::UnityEngine::Vector3> get_CachedTriangleVertices() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Name() ;

/// @brief Method get_NumSelectedTriangles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_NumSelectedTriangles() ;

/// @brief Method set_CachedTriangleVertices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_CachedTriangleVertices(::ArrayW<::UnityEngine::Vector3>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IHull", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHull(IHull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Technie::PhysicsCreator
