#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/PolyNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PolyNode)
namespace Pathfinding::ClipperLib {
struct IntPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class PolyNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::PolyNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::PolyNode*, "Pathfinding.ClipperLib", "PolyNode");
// Dependencies System.Object
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.PolyNode
class CORDL_TYPE PolyNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ChildCount)) int32_t  ChildCount;

 __declspec(property(get=get_Childs)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  Childs;

 __declspec(property(get=get_Contour)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  Contour;

 __declspec(property(put=set_IsOpen)) bool  IsOpen;

/// @brief Field <IsOpen>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsOpen_k__BackingField, put=__cordl_internal_set__IsOpen_k__BackingField)) bool  _IsOpen_k__BackingField;

/// @brief Field m_Childs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Childs, put=__cordl_internal_set_m_Childs)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  m_Childs;

/// @brief Field m_Index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Index, put=__cordl_internal_set_m_Index)) int32_t  m_Index;

/// @brief Field m_Parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Parent, put=__cordl_internal_set_m_Parent)) ::Pathfinding::ClipperLib::PolyNode*  m_Parent;

/// @brief Field m_polygon, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_polygon, put=__cordl_internal_set_m_polygon)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  m_polygon;

/// @brief Method AddChild, addr 0xa682fa8, size 0xd0, virtual false, abstract: false, final false
inline void AddChild(::Pathfinding::ClipperLib::PolyNode*  Child) ;

static inline ::Pathfinding::ClipperLib::PolyNode* New_ctor() ;

constexpr bool const& __cordl_internal_get__IsOpen_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsOpen_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>* const& __cordl_internal_get_m_Childs() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*& __cordl_internal_get_m_Childs() ;

constexpr int32_t const& __cordl_internal_get_m_Index() const;

constexpr int32_t& __cordl_internal_get_m_Index() ;

constexpr ::Pathfinding::ClipperLib::PolyNode* const& __cordl_internal_get_m_Parent() const;

constexpr ::Pathfinding::ClipperLib::PolyNode*& __cordl_internal_get_m_Parent() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>* const& __cordl_internal_get_m_polygon() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*& __cordl_internal_get_m_polygon() ;

constexpr void __cordl_internal_set__IsOpen_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_Childs(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  value) ;

constexpr void __cordl_internal_set_m_Index(int32_t  value) ;

constexpr void __cordl_internal_set_m_Parent(::Pathfinding::ClipperLib::PolyNode*  value) ;

constexpr void __cordl_internal_set_m_polygon(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  value) ;

/// @brief Method .ctor, addr 0xa682d10, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ChildCount, addr 0xa682f58, size 0x48, virtual false, abstract: false, final false
inline int32_t get_ChildCount() ;

/// @brief Method get_Childs, addr 0xa683078, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>* get_Childs() ;

/// @brief Method get_Contour, addr 0xa682fa0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>* get_Contour() ;

/// [CompilerGenerated]
/// @brief Method set_IsOpen, addr 0xa683080, size 0x8, virtual false, abstract: false, final false
inline void set_IsOpen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyNode(PolyNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyNode(PolyNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31647};

/// @brief Field m_Parent, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::ClipperLib::PolyNode*  ___m_Parent;

/// @brief Field m_polygon, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::IntPoint>*  ___m_polygon;

/// @brief Field m_Index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_Index;

/// @brief Field m_Childs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  ___m_Childs;

/// [CompilerGenerated]
/// @brief Field <IsOpen>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____IsOpen_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::PolyNode, ___m_Parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::PolyNode, ___m_polygon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::PolyNode, ___m_Index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::PolyNode, ___m_Childs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ClipperLib::PolyNode, ____IsOpen_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::PolyNode) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
