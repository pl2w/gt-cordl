#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TriangulationContext)
namespace Pathfinding::Poly2Tri {
class DTSweepDebugContext;
}
namespace Pathfinding::Poly2Tri {
class DelaunayTriangle;
}
namespace Pathfinding::Poly2Tri {
class Triangulatable;
}
namespace Pathfinding::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace Pathfinding::Poly2Tri {
class TriangulationConstraint;
}
namespace Pathfinding::Poly2Tri {
class TriangulationDebugContext;
}
namespace Pathfinding::Poly2Tri {
struct TriangulationMode;
}
namespace Pathfinding::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::Poly2Tri {
class TriangulationContext;
}
// Write type traits
MARK_REF_T(::Pathfinding::Poly2Tri::TriangulationContext*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Poly2Tri::TriangulationContext*, "Pathfinding.Poly2Tri", "TriangulationContext");
// Dependencies Pathfinding.Poly2Tri.TriangulationMode, System.Object
namespace Pathfinding::Poly2Tri {
// Is value type: false
// CS Name: Pathfinding.Poly2Tri.TriangulationContext
class CORDL_TYPE TriangulationContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Algorithm)) ::Pathfinding::Poly2Tri::TriangulationAlgorithm  Algorithm;

 __declspec(property(get=get_DTDebugContext)) ::Pathfinding::Poly2Tri::DTSweepDebugContext*  DTDebugContext;

 __declspec(property(get=get_DebugContext)) ::Pathfinding::Poly2Tri::TriangulationDebugContext*  DebugContext;

 __declspec(property(get=get_IsDebugEnabled)) bool  IsDebugEnabled;

/// @brief Field Points, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Points, put=__cordl_internal_set_Points)) ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  Points;

 __declspec(property(get=get_StepCount, put=set_StepCount)) int32_t  StepCount;

/// @brief Field Triangles, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Triangles, put=__cordl_internal_set_Triangles)) ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  Triangles;

 __declspec(property(get=get_Triangulatable, put=set_Triangulatable)) ::Pathfinding::Poly2Tri::Triangulatable*  Triangulatable;

 __declspec(property(get=get_TriangulationMode, put=set_TriangulationMode)) ::Pathfinding::Poly2Tri::TriangulationMode  TriangulationMode;

/// @brief Field <DebugContext>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DebugContext_k__BackingField, put=__cordl_internal_set__DebugContext_k__BackingField)) ::Pathfinding::Poly2Tri::TriangulationDebugContext*  _DebugContext_k__BackingField;

/// @brief Field <IsDebugEnabled>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDebugEnabled_k__BackingField, put=__cordl_internal_set__IsDebugEnabled_k__BackingField)) bool  _IsDebugEnabled_k__BackingField;

/// @brief Field <StepCount>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__StepCount_k__BackingField, put=__cordl_internal_set__StepCount_k__BackingField)) int32_t  _StepCount_k__BackingField;

/// @brief Field <Triangulatable>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Triangulatable_k__BackingField, put=__cordl_internal_set__Triangulatable_k__BackingField)) ::Pathfinding::Poly2Tri::Triangulatable*  _Triangulatable_k__BackingField;

/// @brief Field <TriangulationMode>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__TriangulationMode_k__BackingField, put=__cordl_internal_set__TriangulationMode_k__BackingField)) ::Pathfinding::Poly2Tri::TriangulationMode  _TriangulationMode_k__BackingField;

/// @brief Method Clear, addr 0xa6b5ec8, size 0x80, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Done, addr 0xa6b2c70, size 0x10, virtual false, abstract: false, final false
inline void Done() ;

/// @brief Method NewConstraint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Poly2Tri::TriangulationConstraint* NewConstraint(::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b) ;

static inline ::Pathfinding::Poly2Tri::TriangulationContext* New_ctor() ;

/// @brief Method PrepareTriangulation, addr 0xa6b61dc, size 0x114, virtual true, abstract: false, final false
inline void PrepareTriangulation(::Pathfinding::Poly2Tri::Triangulatable*  t) ;

/// @brief Method Update, addr 0xa6b300c, size 0x4, virtual false, abstract: false, final false
inline void Update(::StringW  message) ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>* const& __cordl_internal_get_Points() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*& __cordl_internal_get_Points() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>* const& __cordl_internal_get_Triangles() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*& __cordl_internal_get_Triangles() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationDebugContext* const& __cordl_internal_get__DebugContext_k__BackingField() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationDebugContext*& __cordl_internal_get__DebugContext_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDebugEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDebugEnabled_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StepCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StepCount_k__BackingField() ;

constexpr ::Pathfinding::Poly2Tri::Triangulatable* const& __cordl_internal_get__Triangulatable_k__BackingField() const;

constexpr ::Pathfinding::Poly2Tri::Triangulatable*& __cordl_internal_get__Triangulatable_k__BackingField() ;

constexpr ::Pathfinding::Poly2Tri::TriangulationMode const& __cordl_internal_get__TriangulationMode_k__BackingField() const;

constexpr ::Pathfinding::Poly2Tri::TriangulationMode& __cordl_internal_get__TriangulationMode_k__BackingField() ;

constexpr void __cordl_internal_set_Points(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  value) ;

constexpr void __cordl_internal_set_Triangles(::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  value) ;

constexpr void __cordl_internal_set__DebugContext_k__BackingField(::Pathfinding::Poly2Tri::TriangulationDebugContext*  value) ;

constexpr void __cordl_internal_set__IsDebugEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__StepCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Triangulatable_k__BackingField(::Pathfinding::Poly2Tri::Triangulatable*  value) ;

constexpr void __cordl_internal_set__TriangulationMode_k__BackingField(::Pathfinding::Poly2Tri::TriangulationMode  value) ;

/// @brief Method .ctor, addr 0xa6b5c2c, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Algorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::Poly2Tri::TriangulationAlgorithm get_Algorithm() ;

/// @brief Method get_DTDebugContext, addr 0xa6b2d9c, size 0x7c, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::DTSweepDebugContext* get_DTDebugContext() ;

/// [CompilerGenerated]
/// @brief Method get_DebugContext, addr 0xa6b6450, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationDebugContext* get_DebugContext() ;

/// [CompilerGenerated]
/// @brief Method get_IsDebugEnabled, addr 0xa6b6488, size 0x8, virtual true, abstract: false, final false
inline bool get_IsDebugEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_StepCount, addr 0xa6b6478, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StepCount() ;

/// [CompilerGenerated]
/// @brief Method get_Triangulatable, addr 0xa6b6468, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::Triangulatable* get_Triangulatable() ;

/// [CompilerGenerated]
/// @brief Method get_TriangulationMode, addr 0xa6b6458, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Poly2Tri::TriangulationMode get_TriangulationMode() ;

/// [CompilerGenerated]
/// @brief Method set_StepCount, addr 0xa6b6480, size 0x8, virtual false, abstract: false, final false
inline void set_StepCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Triangulatable, addr 0xa6b6470, size 0x8, virtual false, abstract: false, final false
inline void set_Triangulatable(::Pathfinding::Poly2Tri::Triangulatable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TriangulationMode, addr 0xa6b6460, size 0x8, virtual false, abstract: false, final false
inline void set_TriangulationMode(::Pathfinding::Poly2Tri::TriangulationMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriangulationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriangulationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangulationContext(TriangulationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangulationContext(TriangulationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32345};

/// @brief Field Triangles, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  ___Triangles;

/// @brief Field Points, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Poly2Tri::TriangulationPoint*>*  ___Points;

/// [CompilerGenerated]
/// @brief Field <DebugContext>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::TriangulationDebugContext*  ____DebugContext_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TriangulationMode>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Pathfinding::Poly2Tri::TriangulationMode  ____TriangulationMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Triangulatable>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Poly2Tri::Triangulatable*  ____Triangulatable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StepCount>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____StepCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDebugEnabled>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  ____IsDebugEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationContext, ___Triangles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationContext, ___Points) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationContext, ____DebugContext_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationContext, ____TriangulationMode_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationContext, ____Triangulatable_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationContext, ____StepCount_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Poly2Tri::TriangulationContext, ____IsDebugEnabled_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Poly2Tri::TriangulationContext) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Poly2Tri
