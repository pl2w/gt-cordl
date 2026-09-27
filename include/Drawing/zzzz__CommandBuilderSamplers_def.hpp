#pragma once
// IWYU pragma private; include "Drawing/CommandBuilderSamplers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
CORDL_MODULE_EXPORT(CommandBuilderSamplers)
// Forward declare root types
namespace Drawing {
class CommandBuilderSamplers;
}
// Write type traits
MARK_REF_T(::Drawing::CommandBuilderSamplers*);
DEFINE_IL2CPP_CLASS(::Drawing::CommandBuilderSamplers*, "Drawing", "CommandBuilderSamplers");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace Drawing {
// Is value type: false
// CS Name: Drawing.CommandBuilderSamplers
class CORDL_TYPE CommandBuilderSamplers : public ::System::Object {
public:
// Declarations
/// @brief Field MarkerConvert, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerConvert, put=setStaticF_MarkerConvert)) ::Unity::Profiling::ProfilerMarker  MarkerConvert;

/// @brief Field MarkerCreateTriangles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerCreateTriangles, put=setStaticF_MarkerCreateTriangles)) ::Unity::Profiling::ProfilerMarker  MarkerCreateTriangles;

/// @brief Field MarkerProcessCommands, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerProcessCommands, put=setStaticF_MarkerProcessCommands)) ::Unity::Profiling::ProfilerMarker  MarkerProcessCommands;

/// @brief Field MarkerSetLayout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerSetLayout, put=setStaticF_MarkerSetLayout)) ::Unity::Profiling::ProfilerMarker  MarkerSetLayout;

/// @brief Field MarkerSubmesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerSubmesh, put=setStaticF_MarkerSubmesh)) ::Unity::Profiling::ProfilerMarker  MarkerSubmesh;

/// @brief Field MarkerUpdateBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerUpdateBuffer, put=setStaticF_MarkerUpdateBuffer)) ::Unity::Profiling::ProfilerMarker  MarkerUpdateBuffer;

/// @brief Field MarkerUpdateIndices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerUpdateIndices, put=setStaticF_MarkerUpdateIndices)) ::Unity::Profiling::ProfilerMarker  MarkerUpdateIndices;

/// @brief Field MarkerUpdateVertices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerUpdateVertices, put=setStaticF_MarkerUpdateVertices)) ::Unity::Profiling::ProfilerMarker  MarkerUpdateVertices;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerConvert() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerCreateTriangles() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerProcessCommands() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerSetLayout() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerSubmesh() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerUpdateBuffer() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerUpdateIndices() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerUpdateVertices() ;

static inline void setStaticF_MarkerConvert(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerCreateTriangles(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerProcessCommands(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerSetLayout(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerSubmesh(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerUpdateBuffer(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerUpdateIndices(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerUpdateVertices(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuilderSamplers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandBuilderSamplers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBuilderSamplers(CommandBuilderSamplers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuilderSamplers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBuilderSamplers(CommandBuilderSamplers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27694};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::CommandBuilderSamplers) == 0x10, "Size mismatch!");

} // namespace end def Drawing
