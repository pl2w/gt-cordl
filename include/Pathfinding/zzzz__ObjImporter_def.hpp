#pragma once
// IWYU pragma private; include "Pathfinding/ObjImporter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ObjImporter)
namespace GlobalNamespace {
struct ObjImporter_meshStruct;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace Pathfinding {
class ObjImporter;
}
// Write type traits
MARK_REF_T(::Pathfinding::ObjImporter*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ObjImporter*, "Pathfinding", "ObjImporter");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ObjImporter
class CORDL_TYPE ObjImporter : public ::System::Object {
public:
// Declarations
using meshStruct = ::GlobalNamespace::ObjImporter_meshStruct;

/// @brief Method ImportFile, addr 0x5e98704, size 0x320, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> ImportFile(::StringW  filePath) ;

static inline ::Pathfinding::ObjImporter* New_ctor() ;

/// @brief Method .ctor, addr 0x5e99fc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method createMeshStruct, addr 0x5e98a24, size 0x610, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ObjImporter_meshStruct createMeshStruct(::StringW  filename) ;

/// @brief Method populateMeshStruct, addr 0x5e99034, size 0xf8c, virtual false, abstract: false, final false
static inline void populateMeshStruct(::by_ref<::GlobalNamespace::ObjImporter_meshStruct>  mesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjImporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjImporter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjImporter(ObjImporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjImporter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjImporter(ObjImporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::ObjImporter) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
