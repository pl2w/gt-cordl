#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityLinkedListSurrogate@ElementReaderWriterSingle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityLinkedListSurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterSingle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityLinkedListSurrogate@ElementReaderWriterSingle)
// Forward declare root types
namespace Fusion::CodeGen {
class UnityLinkedListSurrogate@ElementReaderWriterSingle;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle*, "Fusion.CodeGen", "UnityLinkedListSurrogate@ElementReaderWriterSingle");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterSingle, Fusion.Internal.UnityLinkedListSurrogate`2<T, ReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterSingle
class CORDL_TYPE UnityLinkedListSurrogate@ElementReaderWriterSingle : public ::Fusion::Internal::UnityLinkedListSurrogate_2<float_t,::Fusion::ElementReaderWriterSingle> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<float_t>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<float_t>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle* New_ctor() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<float_t>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2fb50, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2fb40, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<float_t> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2fb48, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLinkedListSurrogate@ElementReaderWriterSingle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterSingle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLinkedListSurrogate@ElementReaderWriterSingle(UnityLinkedListSurrogate@ElementReaderWriterSingle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterSingle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLinkedListSurrogate@ElementReaderWriterSingle(UnityLinkedListSurrogate@ElementReaderWriterSingle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5303};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterSingle) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
