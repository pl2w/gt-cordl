#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedArrayAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedWeavedArrayAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class NetworkedWeavedArrayAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkedWeavedArrayAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkedWeavedArrayAttribute*, "Fusion", "NetworkedWeavedArrayAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkedWeavedArrayAttribute
class CORDL_TYPE NetworkedWeavedArrayAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_ElementReaderWriterType)) ::System::Type*  ElementReaderWriterType;

 __declspec(property(get=get_ElementWordCount)) int32_t  ElementWordCount;

/// @brief Field <Capacity>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capacity_k__BackingField, put=__cordl_internal_set__Capacity_k__BackingField)) int32_t  _Capacity_k__BackingField;

/// @brief Field <ElementReaderWriterType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ElementReaderWriterType_k__BackingField, put=__cordl_internal_set__ElementReaderWriterType_k__BackingField)) ::System::Type*  _ElementReaderWriterType_k__BackingField;

/// @brief Field <ElementWordCount>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__ElementWordCount_k__BackingField, put=__cordl_internal_set__ElementWordCount_k__BackingField)) int32_t  _ElementWordCount_k__BackingField;

static inline ::Fusion::NetworkedWeavedArrayAttribute* New_ctor(int32_t  capacity, int32_t  elementWordCount, ::System::Type*  elementReaderWriter) ;

constexpr int32_t const& __cordl_internal_get__Capacity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Capacity_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ElementReaderWriterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ElementReaderWriterType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ElementWordCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ElementWordCount_k__BackingField() ;

constexpr void __cordl_internal_set__Capacity_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ElementReaderWriterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__ElementWordCount_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fa08ac, size 0x44, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, int32_t  elementWordCount, ::System::Type*  elementReaderWriter) ;

/// [CompilerGenerated]
/// @brief Method get_Capacity, addr 0x5fa0894, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// [CompilerGenerated]
/// @brief Method get_ElementReaderWriterType, addr 0x5fa08a4, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ElementReaderWriterType() ;

/// [CompilerGenerated]
/// @brief Method get_ElementWordCount, addr 0x5fa089c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ElementWordCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedWeavedArrayAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedArrayAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedWeavedArrayAttribute(NetworkedWeavedArrayAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedArrayAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedWeavedArrayAttribute(NetworkedWeavedArrayAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19060};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Capacity>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Capacity_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ElementWordCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____ElementWordCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ElementReaderWriterType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____ElementReaderWriterType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkedWeavedArrayAttribute, ____Capacity_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedArrayAttribute, ____ElementWordCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedArrayAttribute, ____ElementReaderWriterType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkedWeavedArrayAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
