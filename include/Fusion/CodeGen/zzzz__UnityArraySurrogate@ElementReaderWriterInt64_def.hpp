#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterInt64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterInt64_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityArraySurrogate@ElementReaderWriterInt64)
// Forward declare root types
namespace Fusion::CodeGen {
class UnityArraySurrogate@ElementReaderWriterInt64;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64*, "Fusion.CodeGen", "UnityArraySurrogate@ElementReaderWriterInt64");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterInt64, Fusion.Internal.UnityArraySurrogate`2<T, ReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterInt64
class CORDL_TYPE UnityArraySurrogate@ElementReaderWriterInt64 : public ::Fusion::Internal::UnityArraySurrogate_2<int64_t,::Fusion::ElementReaderWriterInt64> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<int64_t>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<int64_t>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64* New_ctor() ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<int64_t>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2f07c, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2f06c, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<int64_t> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2f074, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<int64_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityArraySurrogate@ElementReaderWriterInt64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterInt64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityArraySurrogate@ElementReaderWriterInt64(UnityArraySurrogate@ElementReaderWriterInt64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterInt64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityArraySurrogate@ElementReaderWriterInt64(UnityArraySurrogate@ElementReaderWriterInt64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5278};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int64_t>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterInt64) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
