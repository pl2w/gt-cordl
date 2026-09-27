#pragma once
// IWYU pragma private; include "Fusion/NetworkSerializeMethodAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSerializeMethodAttribute)
// Forward declare root types
namespace Fusion {
class NetworkSerializeMethodAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkSerializeMethodAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSerializeMethodAttribute*, "Fusion", "NetworkSerializeMethodAttribute");
// [AttributeUsage((System.AttributeTargets)64, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkSerializeMethodAttribute
class CORDL_TYPE NetworkSerializeMethodAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief [Obsolete("No longer used. Use a method that returns a struct instead.", true)]
 __declspec(property(get=get_MaxSize, put=set_MaxSize)) int32_t  MaxSize;

/// @brief Field <MaxSize>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxSize_k__BackingField, put=__cordl_internal_set__MaxSize_k__BackingField)) int32_t  _MaxSize_k__BackingField;

static inline ::Fusion::NetworkSerializeMethodAttribute* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__MaxSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MaxSize_k__BackingField() ;

constexpr void __cordl_internal_set__MaxSize_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f702b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_MaxSize, addr 0x5f702a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxSize() ;

/// [CompilerGenerated]
/// @brief Method set_MaxSize, addr 0x5f702b0, size 0x8, virtual false, abstract: false, final false
inline void set_MaxSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSerializeMethodAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSerializeMethodAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSerializeMethodAttribute(NetworkSerializeMethodAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSerializeMethodAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSerializeMethodAttribute(NetworkSerializeMethodAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18812};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <MaxSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____MaxSize_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSerializeMethodAttribute, ____MaxSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSerializeMethodAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
