#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableJobs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BuilderTableJobs)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GorillaTagScripts {
struct BuilderGridPlaneData;
}
namespace GorillaTagScripts {
struct BuilderPieceData;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderTableJobs;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderTableJobs*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTableJobs*, "GorillaTagScripts", "BuilderTableJobs");
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTableJobs
class CORDL_TYPE BuilderTableJobs : public ::System::Object {
public:
// Declarations
/// @brief Method BuildTestPieceListForJob, addr 0x5baaf8c, size 0x180, virtual false, abstract: false, final false
static inline void BuildTestPieceListForJob(::GlobalNamespace::BuilderPiece*  testPiece, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  testGridPlaneList) ;

/// @brief Method BuildTestPieceListForJob, addr 0x5baad78, size 0x214, virtual false, abstract: false, final false
static inline void BuildTestPieceListForJob(::GlobalNamespace::BuilderPiece*  testPiece, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>  testPieceList, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  testGridPlaneList) ;

static inline ::GorillaTagScripts::BuilderTableJobs* New_ctor() ;

/// @brief Method .ctor, addr 0x5bab10c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableJobs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableJobs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTableJobs(BuilderTableJobs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTableJobs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTableJobs(BuilderTableJobs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3956};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::BuilderTableJobs) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts
