#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterBoolean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_def.hpp"
#include "GlobalNamespace/zzzz__ElementReaderWriterBoolean_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UnityArraySurrogate@ElementReaderWriterBoolean)
// Forward declare root types
namespace Fusion::CodeGen {
class UnityArraySurrogate@ElementReaderWriterBoolean;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean*, "Fusion.CodeGen", "UnityArraySurrogate@ElementReaderWriterBoolean");
// [WeaverGenerated]
// Dependencies ElementReaderWriterBoolean, Fusion.Internal.UnityArraySurrogate`2<T, ReaderWriter>
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterBoolean
class CORDL_TYPE UnityArraySurrogate@ElementReaderWriterBoolean : public ::Fusion::Internal::UnityArraySurrogate_2<bool,::GlobalNamespace::ElementReaderWriterBoolean> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<bool>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<bool>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean* New_ctor() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<bool>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2f9b0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2f9a0, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<bool> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2f9a8, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityArraySurrogate@ElementReaderWriterBoolean() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterBoolean", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityArraySurrogate@ElementReaderWriterBoolean(UnityArraySurrogate@ElementReaderWriterBoolean && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterBoolean", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityArraySurrogate@ElementReaderWriterBoolean(UnityArraySurrogate@ElementReaderWriterBoolean const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5299};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<bool>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterBoolean) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
