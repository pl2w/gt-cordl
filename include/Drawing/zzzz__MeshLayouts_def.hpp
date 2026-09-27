#pragma once
// IWYU pragma private; include "Drawing/MeshLayouts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MeshLayouts)
// Forward declare root types
namespace Drawing {
class MeshLayouts;
}
// Write type traits
MARK_REF_T(::Drawing::MeshLayouts*);
DEFINE_IL2CPP_CLASS(::Drawing::MeshLayouts*, "Drawing", "MeshLayouts");
// Dependencies System.Object, UnityEngine.Rendering.VertexAttributeDescriptor
namespace Drawing {
// Is value type: false
// CS Name: Drawing.MeshLayouts
class CORDL_TYPE MeshLayouts : public ::System::Object {
public:
// Declarations
/// @brief Field MeshLayout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MeshLayout, put=setStaticF_MeshLayout)) ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  MeshLayout;

/// @brief Field MeshLayoutText, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MeshLayoutText, put=setStaticF_MeshLayoutText)) ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  MeshLayoutText;

static inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> getStaticF_MeshLayout() ;

static inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> getStaticF_MeshLayoutText() ;

static inline void setStaticF_MeshLayout(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

static inline void setStaticF_MeshLayoutText(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshLayouts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshLayouts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshLayouts(MeshLayouts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshLayouts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshLayouts(MeshLayouts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::MeshLayouts) == 0x10, "Size mismatch!");

} // namespace end def Drawing
