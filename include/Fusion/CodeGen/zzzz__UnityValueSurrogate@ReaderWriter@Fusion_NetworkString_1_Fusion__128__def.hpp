#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__ReaderWriter@Fusion_NetworkString_1_Fusion__128__def.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___128_def.hpp"
CORDL_MODULE_EXPORT(UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_)
namespace Fusion {
template<typename TSize>
struct NetworkString_1;
}
namespace Fusion {
struct _128;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_*, "Fusion.CodeGen", "UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__128>");
// [WeaverGenerated]
// Dependencies Fusion.CodeGen.ReaderWriter@Fusion_NetworkString`1<Fusion__128>, Fusion.Internal.UnityValueSurrogate`2<T, TReaderWriter>, Fusion.NetworkString`1<TSize>, Fusion._128
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__128>
class CORDL_TYPE UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_ : public ::Fusion::Internal::UnityValueSurrogate_2<::Fusion::NetworkString_1<::Fusion::_128>,::Fusion::CodeGen::ReaderWriter@Fusion_NetworkString_1_Fusion__128_> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::Fusion::NetworkString_1<::Fusion::_128>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::Fusion::NetworkString_1<::Fusion::_128>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_* New_ctor() ;

constexpr ::Fusion::NetworkString_1<::Fusion::_128> const& __cordl_internal_get_Data() const;

constexpr ::Fusion::NetworkString_1<::Fusion::_128>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::Fusion::NetworkString_1<::Fusion::_128>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2f6c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2f6a4, size 0x10, virtual true, abstract: false, final false
inline ::Fusion::NetworkString_1<::Fusion::_128> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2f6b4, size 0xc, virtual true, abstract: false, final false
inline void set_DataProperty(::Fusion::NetworkString_1<::Fusion::_128>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_(UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_(UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5291};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_128>  ___Data;

/// @brief Size padding 0x218 - 0x20 = 0x1f8, packed as 0x1f8
 uint8_t  _cordl_size_padding[0x1f8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@Fusion_NetworkString_1_Fusion__128_) == 0x218, "Size mismatch!");

} // namespace end def Fusion::CodeGen
