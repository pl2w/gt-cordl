#pragma once
// IWYU pragma private; include "Fusion/DefaultForPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultForPropertyAttribute)
// Forward declare root types
namespace Fusion {
class DefaultForPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::DefaultForPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::DefaultForPropertyAttribute*, "Fusion", "DefaultForPropertyAttribute");
// [AttributeUsage((System.AttributeTargets)320, Inherited = false, AllowMultiple = true)]
// Dependencies Fusion.PropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DefaultForPropertyAttribute
class CORDL_TYPE DefaultForPropertyAttribute : public ::Fusion::PropertyAttribute {
public:
// Declarations
 __declspec(property(get=get_PropertyName)) ::StringW  PropertyName;

 __declspec(property(get=get_WordCount)) int32_t  WordCount;

 __declspec(property(get=get_WordOffset)) int32_t  WordOffset;

/// @brief Field <PropertyName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyName_k__BackingField, put=__cordl_internal_set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

/// @brief Field <WordCount>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordCount_k__BackingField, put=__cordl_internal_set__WordCount_k__BackingField)) int32_t  _WordCount_k__BackingField;

/// @brief Field <WordOffset>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordOffset_k__BackingField, put=__cordl_internal_set__WordOffset_k__BackingField)) int32_t  _WordOffset_k__BackingField;

static inline ::Fusion::DefaultForPropertyAttribute* New_ctor(::StringW  propertyName, int32_t  wordOffset, int32_t  wordCount) ;

constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__WordCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__WordOffset_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordOffset_k__BackingField() ;

constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__WordCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__WordOffset_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f6ff9c, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  propertyName, int32_t  wordOffset, int32_t  wordCount) ;

/// [CompilerGenerated]
/// @brief Method get_PropertyName, addr 0x5f6ff84, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PropertyName() ;

/// [CompilerGenerated]
/// @brief Method get_WordCount, addr 0x5f6ff94, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordCount() ;

/// [CompilerGenerated]
/// @brief Method get_WordOffset, addr 0x5f6ff8c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordOffset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultForPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultForPropertyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultForPropertyAttribute(DefaultForPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultForPropertyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultForPropertyAttribute(DefaultForPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18798};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <PropertyName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____PropertyName_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordOffset>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____WordOffset_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordCount>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____WordCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DefaultForPropertyAttribute, ____PropertyName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::DefaultForPropertyAttribute, ____WordOffset_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::DefaultForPropertyAttribute, ____WordCount_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Fusion::DefaultForPropertyAttribute) == 0x28, "Size mismatch!");

} // namespace end def Fusion
