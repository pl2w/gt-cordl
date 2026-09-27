#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityLinkedListSurrogate@ElementReaderWriterByte.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityLinkedListSurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterByte_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLinkedListSurrogate@ElementReaderWriterByte)
// Forward declare root types
namespace Fusion::CodeGen {
class UnityLinkedListSurrogate@ElementReaderWriterByte;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterByte*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterByte*, "Fusion.CodeGen", "UnityLinkedListSurrogate@ElementReaderWriterByte");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterByte, Fusion.Internal.UnityLinkedListSurrogate`2<T, ReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterByte
class CORDL_TYPE UnityLinkedListSurrogate@ElementReaderWriterByte : public ::Fusion::Internal::UnityLinkedListSurrogate_2<uint8_t,::Fusion::ElementReaderWriterByte> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<uint8_t>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<uint8_t>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterByte* New_ctor() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<uint8_t>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2f7c8, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2f7b8, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2f7c0, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLinkedListSurrogate@ElementReaderWriterByte() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterByte", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLinkedListSurrogate@ElementReaderWriterByte(UnityLinkedListSurrogate@ElementReaderWriterByte && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterByte", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLinkedListSurrogate@ElementReaderWriterByte(UnityLinkedListSurrogate@ElementReaderWriterByte const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5297};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterByte, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterByte) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
