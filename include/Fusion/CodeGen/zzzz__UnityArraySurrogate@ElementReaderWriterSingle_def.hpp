#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterSingle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterSingle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityArraySurrogate@ElementReaderWriterSingle)
// Forward declare root types
namespace Fusion::CodeGen {
class UnityArraySurrogate@ElementReaderWriterSingle;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterSingle*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterSingle*, "Fusion.CodeGen", "UnityArraySurrogate@ElementReaderWriterSingle");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterSingle, Fusion.Internal.UnityArraySurrogate`2<T, ReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterSingle
class CORDL_TYPE UnityArraySurrogate@ElementReaderWriterSingle : public ::Fusion::Internal::UnityArraySurrogate_2<float_t,::Fusion::ElementReaderWriterSingle> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<float_t>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<float_t>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterSingle* New_ctor() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<float_t>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2fa80, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2fa70, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<float_t> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2fa78, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityArraySurrogate@ElementReaderWriterSingle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterSingle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityArraySurrogate@ElementReaderWriterSingle(UnityArraySurrogate@ElementReaderWriterSingle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterSingle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityArraySurrogate@ElementReaderWriterSingle(UnityArraySurrogate@ElementReaderWriterSingle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5300};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterSingle, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterSingle) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
