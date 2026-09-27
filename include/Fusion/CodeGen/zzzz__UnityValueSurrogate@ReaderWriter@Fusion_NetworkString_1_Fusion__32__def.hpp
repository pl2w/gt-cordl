#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__ReaderWriter@Fusion_NetworkString_1_Fusion__32__def.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___32_def.hpp"
CORDL_MODULE_EXPORT(UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_)
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _32;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_*, "Fusion.CodeGen", "UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>");
// [WeaverGenerated]
// Dependencies Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__32>, Fusion.Internal.UnityValueSurrogate`2<T, TReaderWriter>, Fusion.NetworkString`1<TSize>, Fusion._32
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__32>
class CORDL_TYPE UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_ : public ::Fusion::Internal::UnityValueSurrogate_2<::Fusion::NetworkString_1<::Fusion::_32>,::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__32_> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::Fusion::NetworkString_1<::Fusion::_32>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::Fusion::NetworkString_1<::Fusion::_32>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_* New_ctor() ;

constexpr ::Fusion::NetworkString_1<::Fusion::_32> const& __cordl_internal_get_Data() const;

constexpr ::Fusion::NetworkString_1<::Fusion::_32>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::Fusion::NetworkString_1<::Fusion::_32>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2ebfc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2ebe0, size 0x10, virtual true, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_32> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2ebf0, size 0xc, virtual true, abstract: false, final false
inline void set_DataProperty(::Fusion::NetworkString_1<::Fusion::_32>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_(UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_(UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5260};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_32>  ___Data;

/// @brief Size padding 0x98 - 0x20 = 0x78, packed as 0x78
 uint8_t  _cordl_size_padding[0x78];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__32_) == 0x98, "Size mismatch!");

} // namespace end def Fusion::CodeGen
