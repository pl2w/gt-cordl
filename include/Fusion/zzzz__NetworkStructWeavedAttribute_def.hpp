#pragma once
// IWYU pragma private; include "Fusion/NetworkStructWeavedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkStructWeavedAttribute)
// Forward declare root types
namespace Fusion {
class NetworkStructWeavedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkStructWeavedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkStructWeavedAttribute*, "Fusion", "NetworkStructWeavedAttribute");
// [AttributeUsage((System.AttributeTargets)8, Inherited = false, AllowMultiple = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkStructWeavedAttribute
class CORDL_TYPE NetworkStructWeavedAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_IsGenericComposite)) bool  IsGenericComposite;

 __declspec(property(get=get_WordCount)) int32_t  WordCount;

/// @brief Field <IsGenericComposite>k__BackingField, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGenericComposite_k__BackingField, put=__cordl_internal_set__IsGenericComposite_k__BackingField)) bool  _IsGenericComposite_k__BackingField;

/// @brief Field <WordCount>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordCount_k__BackingField, put=__cordl_internal_set__WordCount_k__BackingField)) int32_t  _WordCount_k__BackingField;

static inline ::Fusion::NetworkStructWeavedAttribute* New_ctor(int32_t  wordCount) ;

static inline ::Fusion::NetworkStructWeavedAttribute* New_ctor(int32_t  wordCount, bool  isGenericComposite) ;

constexpr bool const& __cordl_internal_get__IsGenericComposite_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsGenericComposite_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__WordCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordCount_k__BackingField() ;

constexpr void __cordl_internal_set__IsGenericComposite_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__WordCount_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f702d0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  wordCount) ;

/// @brief Method .ctor, addr 0x5f702f8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  wordCount, bool  isGenericComposite) ;

/// [CompilerGenerated]
/// @brief Method get_IsGenericComposite, addr 0x5f702c8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsGenericComposite() ;

/// [CompilerGenerated]
/// @brief Method get_WordCount, addr 0x5f702c0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkStructWeavedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkStructWeavedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkStructWeavedAttribute(NetworkStructWeavedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkStructWeavedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkStructWeavedAttribute(NetworkStructWeavedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18813};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____WordCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsGenericComposite>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  ____IsGenericComposite_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkStructWeavedAttribute, ____WordCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkStructWeavedAttribute, ____IsGenericComposite_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkStructWeavedAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
