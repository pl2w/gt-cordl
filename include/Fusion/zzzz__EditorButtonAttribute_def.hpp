#pragma once
// IWYU pragma private; include "Fusion/EditorButtonAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__EditorButtonVisibility_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EditorButtonAttribute)
namespace Fusion {
struct EditorButtonVisibility;
}
// Forward declare root types
namespace Fusion {
class EditorButtonAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::EditorButtonAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::EditorButtonAttribute*, "Fusion", "EditorButtonAttribute");
// [AttributeUsage((System.AttributeTargets)64)]
// Dependencies Fusion.EditorButtonVisibility, System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.EditorButtonAttribute
class CORDL_TYPE EditorButtonAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field DirtyObject, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_DirtyObject, put=__cordl_internal_set_DirtyObject)) bool  DirtyObject;

/// @brief Field Label, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Label, put=__cordl_internal_set_Label)) ::StringW  Label;

/// @brief Field Priority, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Priority, put=__cordl_internal_set_Priority)) int32_t  Priority;

/// @brief Field Visibility, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Visibility, put=__cordl_internal_set_Visibility)) ::Fusion::EditorButtonVisibility  Visibility;

static inline ::Fusion::EditorButtonAttribute* New_ctor(::StringW  label, ::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject) ;

static inline ::Fusion::EditorButtonAttribute* New_ctor(::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject) ;

constexpr bool const& __cordl_internal_get_DirtyObject() const;

constexpr bool& __cordl_internal_get_DirtyObject() ;

constexpr ::StringW const& __cordl_internal_get_Label() const;

constexpr ::StringW& __cordl_internal_get_Label() ;

constexpr int32_t const& __cordl_internal_get_Priority() const;

constexpr int32_t& __cordl_internal_get_Priority() ;

constexpr ::Fusion::EditorButtonVisibility const& __cordl_internal_get_Visibility() const;

constexpr ::Fusion::EditorButtonVisibility& __cordl_internal_get_Visibility() ;

constexpr void __cordl_internal_set_DirtyObject(bool  value) ;

constexpr void __cordl_internal_set_Label(::StringW  value) ;

constexpr void __cordl_internal_set_Priority(int32_t  value) ;

constexpr void __cordl_internal_set_Visibility(::Fusion::EditorButtonVisibility  value) ;

/// @brief Method .ctor, addr 0x5f3d634, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  label, ::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject) ;

/// @brief Method .ctor, addr 0x5f3d684, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::EditorButtonVisibility  visibility, int32_t  priority, bool  dirtyObject) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorButtonAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorButtonAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorButtonAttribute(EditorButtonAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorButtonAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorButtonAttribute(EditorButtonAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31272};

/// @brief Field Label, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Label;

/// @brief Field Visibility, offset: 0x18, size: 0x4, def value: None
 ::Fusion::EditorButtonVisibility  ___Visibility;

/// @brief Field Priority, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Priority;

/// @brief Field DirtyObject, offset: 0x20, size: 0x1, def value: None
 bool  ___DirtyObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::EditorButtonAttribute, ___Label) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::EditorButtonAttribute, ___Visibility) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::EditorButtonAttribute, ___Priority) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::EditorButtonAttribute, ___DirtyObject) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::EditorButtonAttribute) == 0x28, "Size mismatch!");

} // namespace end def Fusion
