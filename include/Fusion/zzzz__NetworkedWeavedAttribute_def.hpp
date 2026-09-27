#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedWeavedAttribute)
// Forward declare root types
namespace Fusion {
class NetworkedWeavedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkedWeavedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkedWeavedAttribute*, "Fusion", "NetworkedWeavedAttribute");
// [AttributeUsage((System.AttributeTargets)128, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkedWeavedAttribute
class CORDL_TYPE NetworkedWeavedAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_WordCount)) int32_t  WordCount;

 __declspec(property(get=get_WordOffset)) int32_t  WordOffset;

/// @brief Field <WordCount>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordCount_k__BackingField, put=__cordl_internal_set__WordCount_k__BackingField)) int32_t  _WordCount_k__BackingField;

/// @brief Field <WordOffset>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordOffset_k__BackingField, put=__cordl_internal_set__WordOffset_k__BackingField)) int32_t  _WordOffset_k__BackingField;

static inline ::Fusion::NetworkedWeavedAttribute* New_ctor(int32_t  wordOffset, int32_t  wordCount) ;

constexpr int32_t const& __cordl_internal_get__WordCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__WordOffset_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordOffset_k__BackingField() ;

constexpr void __cordl_internal_set__WordCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__WordOffset_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f70170, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  wordOffset, int32_t  wordCount) ;

/// [CompilerGenerated]
/// @brief Method get_WordCount, addr 0x5f70168, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordCount() ;

/// [CompilerGenerated]
/// @brief Method get_WordOffset, addr 0x5f70160, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordOffset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedWeavedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedWeavedAttribute(NetworkedWeavedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedWeavedAttribute(NetworkedWeavedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18806};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordOffset>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____WordOffset_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____WordCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkedWeavedAttribute, ____WordOffset_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedAttribute, ____WordCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkedWeavedAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
