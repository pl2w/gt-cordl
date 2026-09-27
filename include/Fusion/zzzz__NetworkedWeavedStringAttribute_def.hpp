#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedStringAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedWeavedStringAttribute)
// Forward declare root types
namespace Fusion {
class NetworkedWeavedStringAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkedWeavedStringAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkedWeavedStringAttribute*, "Fusion", "NetworkedWeavedStringAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkedWeavedStringAttribute
class CORDL_TYPE NetworkedWeavedStringAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_CacheFieldName)) ::StringW  CacheFieldName;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

/// @brief Field <CacheFieldName>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CacheFieldName_k__BackingField, put=__cordl_internal_set__CacheFieldName_k__BackingField)) ::StringW  _CacheFieldName_k__BackingField;

/// @brief Field <Capacity>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capacity_k__BackingField, put=__cordl_internal_set__Capacity_k__BackingField)) int32_t  _Capacity_k__BackingField;

static inline ::Fusion::NetworkedWeavedStringAttribute* New_ctor(int32_t  capacity, ::StringW  cacheFieldName) ;

constexpr ::StringW const& __cordl_internal_get__CacheFieldName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CacheFieldName_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Capacity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Capacity_k__BackingField() ;

constexpr void __cordl_internal_set__CacheFieldName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Capacity_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f7019c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::StringW  cacheFieldName) ;

/// [CompilerGenerated]
/// @brief Method get_CacheFieldName, addr 0x5f701dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CacheFieldName() ;

/// [CompilerGenerated]
/// @brief Method get_Capacity, addr 0x5f701d4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedWeavedStringAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedStringAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedWeavedStringAttribute(NetworkedWeavedStringAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedStringAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedWeavedStringAttribute(NetworkedWeavedStringAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18807};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Capacity>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Capacity_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <CacheFieldName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____CacheFieldName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkedWeavedStringAttribute, ____Capacity_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedStringAttribute, ____CacheFieldName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkedWeavedStringAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
