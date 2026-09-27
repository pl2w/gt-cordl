#pragma once
// IWYU pragma private; include "UnityEngine/Localization/DisplayNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DisplayNameAttribute)
// Forward declare root types
namespace UnityEngine::Localization {
class DisplayNameAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::DisplayNameAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::DisplayNameAttribute*, "UnityEngine.Localization", "DisplayNameAttribute");
// [AttributeUsage((System.AttributeTargets)32767, AllowMultiple = false)]
// Dependencies System.Attribute
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.DisplayNameAttribute
class CORDL_TYPE DisplayNameAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_IconPath, put=set_IconPath)) ::StringW  IconPath;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <IconPath>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__IconPath_k__BackingField, put=__cordl_internal_set__IconPath_k__BackingField)) ::StringW  _IconPath_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::UnityEngine::Localization::DisplayNameAttribute* New_ctor(::StringW  name, ::StringW  iconPath) ;

constexpr ::StringW const& __cordl_internal_get__IconPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__IconPath_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__IconPath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xb00d05c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  iconPath) ;

/// [CompilerGenerated]
/// @brief Method get_IconPath, addr 0xb00d04c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_IconPath() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xb00d03c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method set_IconPath, addr 0xb00d054, size 0x8, virtual false, abstract: false, final false
inline void set_IconPath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0xb00d044, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisplayNameAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisplayNameAttribute(DisplayNameAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisplayNameAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisplayNameAttribute(DisplayNameAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25016};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IconPath>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____IconPath_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::DisplayNameAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::DisplayNameAttribute, ____IconPath_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::DisplayNameAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization
