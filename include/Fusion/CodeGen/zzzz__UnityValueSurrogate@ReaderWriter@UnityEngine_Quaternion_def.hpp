#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__ReaderWriter@UnityEngine_Quaternion_def.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion*, "Fusion.CodeGen", "UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion");
// [WeaverGenerated]
// Dependencies Fusion.CodeGen.ReaderWriter@UnityEngine_Quaternion, Fusion.Internal.UnityValueSurrogate`2<T, TReaderWriter>, UnityEngine.Quaternion
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion
class CORDL_TYPE UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion : public ::Fusion::Internal::UnityValueSurrogate_2<::UnityEngine::Quaternion,::Fusion::CodeGen::ReaderWriter@UnityEngine_Quaternion> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::UnityEngine::Quaternion  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::UnityEngine::Quaternion  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion* New_ctor() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_Data() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::UnityEngine::Quaternion  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2ef1c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2ef04, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2ef10, size 0xc, virtual true, abstract: false, final false
inline void set_DataProperty(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion(UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion(UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5271};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityValueSurrogate@ReaderWriter@UnityEngine_Quaternion) == 0x20, "Size mismatch!");

} // namespace end def Fusion::CodeGen
