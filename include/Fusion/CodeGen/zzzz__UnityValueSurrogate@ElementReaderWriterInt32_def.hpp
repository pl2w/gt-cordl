#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ElementReaderWriterInt32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterInt32_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityValueSurrogate@ElementReaderWriterInt32)
// Forward declare root types
namespace Fusion::CodeGen {
class UnityValueSurrogate@ElementReaderWriterInt32;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32*, "Fusion.CodeGen", "UnityValueSurrogate@ElementReaderWriterInt32");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterInt32, Fusion.Internal.UnityValueSurrogate`2<T, TReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterInt32
class CORDL_TYPE UnityValueSurrogate@ElementReaderWriterInt32 : public ::Fusion::Internal::UnityValueSurrogate_2<int32_t,::Fusion::ElementReaderWriterInt32> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) int32_t  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) int32_t  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Data() const;

constexpr int32_t& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(int32_t  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2ef74, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2ef64, size 0x8, virtual true, abstract: false, final false
inline int32_t get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2ef6c, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate@ElementReaderWriterInt32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ElementReaderWriterInt32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate@ElementReaderWriterInt32(UnityValueSurrogate@ElementReaderWriterInt32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ElementReaderWriterInt32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate@ElementReaderWriterInt32(UnityValueSurrogate@ElementReaderWriterInt32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5272};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterInt32) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
