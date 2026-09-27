#pragma once
// IWYU pragma private; include "Drawing/GizmoContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoContext)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Drawing {
class GizmoContext;
}
// Write type traits
MARK_REF_T(::Drawing::GizmoContext*);
DEFINE_IL2CPP_CLASS(::Drawing::GizmoContext*, "Drawing", "GizmoContext");
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.GizmoContext
class CORDL_TYPE GizmoContext : public ::System::Object {
public:
// Declarations
/// @brief Field dirty, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_dirty, put=setStaticF_dirty)) bool  dirty;

/// @brief Field drawingGizmos, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_drawingGizmos, put=setStaticF_drawingGizmos)) bool  drawingGizmos;

/// @brief Field selectedTransforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_selectedTransforms, put=setStaticF_selectedTransforms)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  selectedTransforms;

/// @brief Field selectionSizeInternal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_selectionSizeInternal, put=setStaticF_selectionSizeInternal)) int32_t  selectionSizeInternal;

/// @brief Method InActiveSelection, addr 0x55d27bc, size 0x68, virtual false, abstract: false, final false
static inline bool InActiveSelection(::UnityEngine::Component*  c) ;

/// @brief Method InActiveSelection, addr 0x55d2824, size 0x8, virtual false, abstract: false, final false
static inline bool InActiveSelection(::UnityEngine::Transform*  tr) ;

/// @brief Method InSelection, addr 0x55d2604, size 0x70, virtual false, abstract: false, final false
static inline bool InSelection(::UnityEngine::Component*  c) ;

/// @brief Method InSelection, addr 0x55d2674, size 0x148, virtual false, abstract: false, final false
static inline bool InSelection(::UnityEngine::Transform*  tr) ;

/// @brief Method Refresh, addr 0x55d2548, size 0x4, virtual false, abstract: false, final false
static inline void Refresh() ;

/// @brief Method SetDirty, addr 0x55d25a8, size 0x5c, virtual false, abstract: false, final false
static inline void SetDirty() ;

static inline bool getStaticF_dirty() ;

static inline bool getStaticF_drawingGizmos() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>* getStaticF_selectedTransforms() ;

static inline int32_t getStaticF_selectionSizeInternal() ;

/// @brief Method get_selectionSize, addr 0x55d24f0, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_selectionSize() ;

static inline void setStaticF_dirty(bool  value) ;

static inline void setStaticF_drawingGizmos(bool  value) ;

static inline void setStaticF_selectedTransforms(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Transform>>*  value) ;

static inline void setStaticF_selectionSizeInternal(int32_t  value) ;

/// @brief Method set_selectionSize, addr 0x55d254c, size 0x5c, virtual false, abstract: false, final false
static inline void set_selectionSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoContext(GizmoContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoContext(GizmoContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::GizmoContext) == 0x10, "Size mismatch!");

} // namespace end def Drawing
