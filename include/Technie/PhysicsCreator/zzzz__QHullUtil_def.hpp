#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHullUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QHullUtil)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class QHullUtil;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHullUtil*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHullUtil*, "Technie.PhysicsCreator", "QHullUtil");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHullUtil
class CORDL_TYPE QHullUtil : public ::System::Object {
public:
// Declarations
/// @brief Method FindConvexHull, addr 0xadcc5e4, size 0x700, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> FindConvexHull(::StringW  debugName, ::UnityEngine::Mesh*  inputMesh, bool  showErrorInLog) ;

/// @brief Method FindConvexHull, addr 0xadccce4, size 0x730, virtual false, abstract: false, final false
static inline void FindConvexHull(::StringW  debugName, ::ArrayW<int32_t>  selectedFaces, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  hullVertices, ::by_ref<::ArrayW<int32_t>>  hullIndices, bool  showErrorInLog) ;

static inline ::Technie::PhysicsCreator::QHullUtil* New_ctor() ;

/// @brief Method .ctor, addr 0xadcd414, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QHullUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QHullUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
QHullUtil(QHullUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QHullUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
QHullUtil(QHullUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30508};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::QHullUtil) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
