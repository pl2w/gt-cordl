#pragma once
// IWYU pragma private; include "Fusion/NetworkedWeavedDictionaryAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkedWeavedDictionaryAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class NetworkedWeavedDictionaryAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkedWeavedDictionaryAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkedWeavedDictionaryAttribute*, "Fusion", "NetworkedWeavedDictionaryAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkedWeavedDictionaryAttribute
class CORDL_TYPE NetworkedWeavedDictionaryAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_KeyReaderWriterType, put=set_KeyReaderWriterType)) ::System::Type*  KeyReaderWriterType;

 __declspec(property(get=get_KeyWordCount)) int32_t  KeyWordCount;

 __declspec(property(get=get_ValueReaderWriterType, put=set_ValueReaderWriterType)) ::System::Type*  ValueReaderWriterType;

 __declspec(property(get=get_ValueWordCount)) int32_t  ValueWordCount;

/// @brief Field <Capacity>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Capacity_k__BackingField, put=__cordl_internal_set__Capacity_k__BackingField)) int32_t  _Capacity_k__BackingField;

/// @brief Field <KeyReaderWriterType>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__KeyReaderWriterType_k__BackingField, put=__cordl_internal_set__KeyReaderWriterType_k__BackingField)) ::System::Type*  _KeyReaderWriterType_k__BackingField;

/// @brief Field <KeyWordCount>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__KeyWordCount_k__BackingField, put=__cordl_internal_set__KeyWordCount_k__BackingField)) int32_t  _KeyWordCount_k__BackingField;

/// @brief Field <ValueReaderWriterType>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ValueReaderWriterType_k__BackingField, put=__cordl_internal_set__ValueReaderWriterType_k__BackingField)) ::System::Type*  _ValueReaderWriterType_k__BackingField;

/// @brief Field <ValueWordCount>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__ValueWordCount_k__BackingField, put=__cordl_internal_set__ValueWordCount_k__BackingField)) int32_t  _ValueWordCount_k__BackingField;

static inline ::Fusion::NetworkedWeavedDictionaryAttribute* New_ctor(int32_t  capacity, int32_t  keyWordCount, int32_t  elementWordCount, ::System::Type*  keyReaderWriterType, ::System::Type*  valueReaderWriterType) ;

constexpr int32_t const& __cordl_internal_get__Capacity_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Capacity_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__KeyReaderWriterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__KeyReaderWriterType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__KeyWordCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__KeyWordCount_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__ValueReaderWriterType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ValueReaderWriterType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ValueWordCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ValueWordCount_k__BackingField() ;

constexpr void __cordl_internal_set__Capacity_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__KeyReaderWriterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__KeyWordCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ValueReaderWriterType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__ValueWordCount_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fa0cec, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, int32_t  keyWordCount, int32_t  elementWordCount, ::System::Type*  keyReaderWriterType, ::System::Type*  valueReaderWriterType) ;

/// [CompilerGenerated]
/// @brief Method get_Capacity, addr 0x5fa0d54, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// [CompilerGenerated]
/// @brief Method get_KeyReaderWriterType, addr 0x5fa0d6c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_KeyReaderWriterType() ;

/// [CompilerGenerated]
/// @brief Method get_KeyWordCount, addr 0x5fa0d5c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_KeyWordCount() ;

/// [CompilerGenerated]
/// @brief Method get_ValueReaderWriterType, addr 0x5fa0d7c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_ValueReaderWriterType() ;

/// [CompilerGenerated]
/// @brief Method get_ValueWordCount, addr 0x5fa0d64, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ValueWordCount() ;

/// [CompilerGenerated]
/// @brief Method set_KeyReaderWriterType, addr 0x5fa0d74, size 0x8, virtual false, abstract: false, final false
inline void set_KeyReaderWriterType(::System::Type*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ValueReaderWriterType, addr 0x5fa0d84, size 0x8, virtual false, abstract: false, final false
inline void set_ValueReaderWriterType(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkedWeavedDictionaryAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedDictionaryAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkedWeavedDictionaryAttribute(NetworkedWeavedDictionaryAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkedWeavedDictionaryAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkedWeavedDictionaryAttribute(NetworkedWeavedDictionaryAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19069};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Capacity>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Capacity_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <KeyWordCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____KeyWordCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ValueWordCount>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____ValueWordCount_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <KeyReaderWriterType>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ____KeyReaderWriterType_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ValueReaderWriterType>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Type*  ____ValueReaderWriterType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkedWeavedDictionaryAttribute, ____Capacity_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedDictionaryAttribute, ____KeyWordCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedDictionaryAttribute, ____ValueWordCount_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedDictionaryAttribute, ____KeyReaderWriterType_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkedWeavedDictionaryAttribute, ____ValueReaderWriterType_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkedWeavedDictionaryAttribute) == 0x30, "Size mismatch!");

} // namespace end def Fusion
