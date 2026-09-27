#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ElementReaderWriterNetworkBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterNetworkBool_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UnityArraySurrogate@ElementReaderWriterNetworkBool)
namespace Fusion {
struct NetworkBool;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityArraySurrogate@ElementReaderWriterNetworkBool;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool*, "Fusion.CodeGen", "UnityArraySurrogate@ElementReaderWriterNetworkBool");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterNetworkBool, Fusion.Internal.UnityArraySurrogate`2<T, ReaderWriter>, Fusion.NetworkBool
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityArraySurrogate@ElementReaderWriterNetworkBool
class CORDL_TYPE UnityArraySurrogate@ElementReaderWriterNetworkBool : public ::Fusion::Internal::UnityArraySurrogate_2<::Fusion::NetworkBool,::Fusion::ElementReaderWriterNetworkBool> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<::Fusion::NetworkBool>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<::Fusion::NetworkBool>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool* New_ctor() ;

constexpr ::ArrayW<::Fusion::NetworkBool> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<::Fusion::NetworkBool>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<::Fusion::NetworkBool>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2ed0c, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2ecfc, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::Fusion::NetworkBool> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2ed04, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<::Fusion::NetworkBool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityArraySurrogate@ElementReaderWriterNetworkBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterNetworkBool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityArraySurrogate@ElementReaderWriterNetworkBool(UnityArraySurrogate@ElementReaderWriterNetworkBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityArraySurrogate@ElementReaderWriterNetworkBool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityArraySurrogate@ElementReaderWriterNetworkBool(UnityArraySurrogate@ElementReaderWriterNetworkBool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5267};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Fusion::NetworkBool>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityArraySurrogate@ElementReaderWriterNetworkBool) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
