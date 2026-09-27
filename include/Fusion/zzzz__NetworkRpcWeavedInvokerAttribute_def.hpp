#pragma once
// IWYU pragma private; include "Fusion/NetworkRpcWeavedInvokerAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRpcWeavedInvokerAttribute)
// Forward declare root types
namespace Fusion {
class NetworkRpcWeavedInvokerAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkRpcWeavedInvokerAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRpcWeavedInvokerAttribute*, "Fusion", "NetworkRpcWeavedInvokerAttribute");
// [AttributeUsage((System.AttributeTargets)64, Inherited = false, AllowMultiple = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRpcWeavedInvokerAttribute
class CORDL_TYPE NetworkRpcWeavedInvokerAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Key)) int32_t  Key;

 __declspec(property(get=get_Sources)) int32_t  Sources;

 __declspec(property(get=get_Targets)) int32_t  Targets;

/// @brief Field <Key>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Key_k__BackingField, put=__cordl_internal_set__Key_k__BackingField)) int32_t  _Key_k__BackingField;

/// @brief Field <Sources>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Sources_k__BackingField, put=__cordl_internal_set__Sources_k__BackingField)) int32_t  _Sources_k__BackingField;

/// @brief Field <Targets>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Targets_k__BackingField, put=__cordl_internal_set__Targets_k__BackingField)) int32_t  _Targets_k__BackingField;

static inline ::Fusion::NetworkRpcWeavedInvokerAttribute* New_ctor(int32_t  key, int32_t  sources, int32_t  targets) ;

constexpr int32_t const& __cordl_internal_get__Key_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Key_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Sources_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Sources_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Targets_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Targets_k__BackingField() ;

constexpr void __cordl_internal_set__Key_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Sources_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Targets_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f7026c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  key, int32_t  sources, int32_t  targets) ;

/// [CompilerGenerated]
/// @brief Method get_Key, addr 0x5f70254, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Key() ;

/// [CompilerGenerated]
/// @brief Method get_Sources, addr 0x5f7025c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Sources() ;

/// [CompilerGenerated]
/// @brief Method get_Targets, addr 0x5f70264, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Targets() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRpcWeavedInvokerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRpcWeavedInvokerAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRpcWeavedInvokerAttribute(NetworkRpcWeavedInvokerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRpcWeavedInvokerAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRpcWeavedInvokerAttribute(NetworkRpcWeavedInvokerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18811};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Key>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Key_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Sources>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Sources_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Targets>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Targets_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRpcWeavedInvokerAttribute, ____Key_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRpcWeavedInvokerAttribute, ____Sources_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRpcWeavedInvokerAttribute, ____Targets_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRpcWeavedInvokerAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
