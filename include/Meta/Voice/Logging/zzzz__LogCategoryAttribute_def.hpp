#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogCategoryAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogCategoryAttribute)
namespace Meta::Voice::Logging {
struct LogCategory;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class LogCategoryAttribute;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::LogCategoryAttribute*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogCategoryAttribute*, "Meta.Voice.Logging", "LogCategoryAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogCategoryAttribute
class CORDL_TYPE LogCategoryAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <CategoryName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CategoryName_k__BackingField, put=__cordl_internal_set__CategoryName_k__BackingField)) ::StringW  _CategoryName_k__BackingField;

/// @brief Field <ParentCategoryName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParentCategoryName_k__BackingField, put=__cordl_internal_set__ParentCategoryName_k__BackingField)) ::StringW  _ParentCategoryName_k__BackingField;

static inline ::Meta::Voice::Logging::LogCategoryAttribute* New_ctor(::Meta::Voice::Logging::LogCategory  categoryName) ;

static inline ::Meta::Voice::Logging::LogCategoryAttribute* New_ctor(::StringW  categoryName) ;

static inline ::Meta::Voice::Logging::LogCategoryAttribute* New_ctor(::Meta::Voice::Logging::LogCategory  parentCategoryName, ::Meta::Voice::Logging::LogCategory  categoryName) ;

static inline ::Meta::Voice::Logging::LogCategoryAttribute* New_ctor(::StringW  parentCategoryName, ::StringW  categoryName) ;

constexpr ::StringW const& __cordl_internal_get__CategoryName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CategoryName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ParentCategoryName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ParentCategoryName_k__BackingField() ;

constexpr void __cordl_internal_set__CategoryName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ParentCategoryName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e36c50, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Logging::LogCategory  categoryName) ;

/// @brief Method .ctor, addr 0x9e36c20, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  categoryName) ;

/// @brief Method .ctor, addr 0x9e36d20, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Logging::LogCategory  parentCategoryName, ::Meta::Voice::Logging::LogCategory  categoryName) ;

/// @brief Method .ctor, addr 0x9e36cdc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  parentCategoryName, ::StringW  categoryName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogCategoryAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogCategoryAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogCategoryAttribute(LogCategoryAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogCategoryAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogCategoryAttribute(LogCategoryAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30955};

/// [CompilerGenerated]
/// @brief Field <CategoryName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____CategoryName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ParentCategoryName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____ParentCategoryName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogCategoryAttribute, ____CategoryName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogCategoryAttribute, ____ParentCategoryName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogCategoryAttribute) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
