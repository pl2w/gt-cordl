#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ElementReaderWriterNetworkBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterNetworkBool_def.hpp"
#include "Fusion/zzzz__NetworkBool_def.hpp"
CORDL_MODULE_EXPORT(UnityValueSurrogate@ElementReaderWriterNetworkBool)
namespace Fusion {
struct NetworkBool;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityValueSurrogate@ElementReaderWriterNetworkBool;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool*, "Fusion.CodeGen", "UnityValueSurrogate@ElementReaderWriterNetworkBool");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterNetworkBool, Fusion.Internal.UnityValueSurrogate`2<T, TReaderWriter>, Fusion.NetworkBool
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterNetworkBool
class CORDL_TYPE UnityValueSurrogate@ElementReaderWriterNetworkBool : public ::Fusion::Internal::UnityValueSurrogate_2<::Fusion::NetworkBool,::Fusion::ElementReaderWriterNetworkBool> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::Fusion::NetworkBool  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::Fusion::NetworkBool  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool* New_ctor() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_Data() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::Fusion::NetworkBool  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2ea84, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2ea74, size 0x8, virtual true, abstract: false, final false
inline ::Fusion::NetworkBool get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2ea7c, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::Fusion::NetworkBool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate@ElementReaderWriterNetworkBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ElementReaderWriterNetworkBool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate@ElementReaderWriterNetworkBool(UnityValueSurrogate@ElementReaderWriterNetworkBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ElementReaderWriterNetworkBool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate@ElementReaderWriterNetworkBool(UnityValueSurrogate@ElementReaderWriterNetworkBool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5256};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterNetworkBool) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
