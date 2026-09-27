#pragma once
// IWYU pragma private; include "GlobalNamespace/FlattenerCrumb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FlattenerCrumb)
namespace GlobalNamespace {
class ObjectHierarchyFlattener;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FlattenerCrumb;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlattenerCrumb*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlattenerCrumb*, "", "FlattenerCrumb");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlattenerCrumb
class CORDL_TYPE FlattenerCrumb : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field flattenerList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_flattenerList, put=__cordl_internal_set_flattenerList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*  flattenerList;

/// @brief Method AddFlattenerReference, addr 0x5674578, size 0x80, virtual false, abstract: false, final false
inline void AddFlattenerReference(::GlobalNamespace::ObjectHierarchyFlattener*  flattener) ;

static inline ::GlobalNamespace::FlattenerCrumb* New_ctor() ;

/// @brief Method OnDisable, addr 0x56743ec, size 0x8c, virtual false, abstract: false, final false
inline void OnDisable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>* const& __cordl_internal_get_flattenerList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*& __cordl_internal_get_flattenerList() ;

constexpr void __cordl_internal_set_flattenerList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*  value) ;

/// @brief Method .ctor, addr 0x56745f8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlattenerCrumb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlattenerCrumb", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlattenerCrumb(FlattenerCrumb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlattenerCrumb", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlattenerCrumb(FlattenerCrumb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{828};

/// [DebugReadout]
/// @brief Field flattenerList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*  ___flattenerList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlattenerCrumb, ___flattenerList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlattenerCrumb) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
