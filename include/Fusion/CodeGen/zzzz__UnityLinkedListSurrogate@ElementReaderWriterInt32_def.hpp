#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityLinkedListSurrogate@ElementReaderWriterInt32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityLinkedListSurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterInt32_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLinkedListSurrogate@ElementReaderWriterInt32)
// Forward declare root types
namespace Fusion::CodeGen {
class UnityLinkedListSurrogate@ElementReaderWriterInt32;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterInt32*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterInt32*, "Fusion.CodeGen", "UnityLinkedListSurrogate@ElementReaderWriterInt32");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterInt32, Fusion.Internal.UnityLinkedListSurrogate`2<T, ReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterInt32
class CORDL_TYPE UnityLinkedListSurrogate@ElementReaderWriterInt32 : public ::Fusion::Internal::UnityLinkedListSurrogate_2<int32_t,::Fusion::ElementReaderWriterInt32> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<int32_t>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<int32_t>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterInt32* New_ctor() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<int32_t>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2f8bc, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2f8ac, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<int32_t> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2f8b4, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLinkedListSurrogate@ElementReaderWriterInt32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterInt32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLinkedListSurrogate@ElementReaderWriterInt32(UnityLinkedListSurrogate@ElementReaderWriterInt32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterInt32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLinkedListSurrogate@ElementReaderWriterInt32(UnityLinkedListSurrogate@ElementReaderWriterInt32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5298};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterInt32, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterInt32) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
