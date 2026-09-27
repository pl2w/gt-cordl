#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourWeavedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviourWeavedAttribute)
// Forward declare root types
namespace Fusion {
class NetworkBehaviourWeavedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkBehaviourWeavedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviourWeavedAttribute*, "Fusion", "NetworkBehaviourWeavedAttribute");
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviourWeavedAttribute
class CORDL_TYPE NetworkBehaviourWeavedAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_WordCount)) int32_t  WordCount;

/// @brief Field <WordCount>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__WordCount_k__BackingField, put=__cordl_internal_set__WordCount_k__BackingField)) int32_t  _WordCount_k__BackingField;

static inline ::Fusion::NetworkBehaviourWeavedAttribute* New_ctor(int32_t  wordCount) ;

constexpr int32_t const& __cordl_internal_get__WordCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__WordCount_k__BackingField() ;

constexpr void __cordl_internal_set__WordCount_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f7006c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  wordCount) ;

/// [CompilerGenerated]
/// @brief Method get_WordCount, addr 0x5f70064, size 0x8, virtual false, abstract: false, final false
inline int32_t get_WordCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourWeavedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviourWeavedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviourWeavedAttribute(NetworkBehaviourWeavedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviourWeavedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviourWeavedAttribute(NetworkBehaviourWeavedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18802};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <WordCount>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____WordCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBehaviourWeavedAttribute, ____WordCount_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBehaviourWeavedAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
