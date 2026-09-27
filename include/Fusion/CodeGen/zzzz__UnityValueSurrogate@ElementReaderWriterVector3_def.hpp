#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityValueSurrogate@ElementReaderWriterVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterVector3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(UnityValueSurrogate@ElementReaderWriterVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityValueSurrogate@ElementReaderWriterVector3;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3*, "Fusion.CodeGen", "UnityValueSurrogate@ElementReaderWriterVector3");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterVector3, Fusion.Internal.UnityValueSurrogate`2<T, TReaderWriter>, UnityEngine.Vector3
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3
class CORDL_TYPE UnityValueSurrogate@ElementReaderWriterVector3 : public ::Fusion::Internal::UnityValueSurrogate_2<::UnityEngine::Vector3,::Fusion::ElementReaderWriterVector3> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::UnityEngine::Vector3  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::UnityEngine::Vector3  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Data() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::UnityEngine::Vector3  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2ec5c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2ec44, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2ec50, size 0xc, virtual true, abstract: false, final false
inline void set_DataProperty(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityValueSurrogate@ElementReaderWriterVector3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ElementReaderWriterVector3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityValueSurrogate@ElementReaderWriterVector3(UnityValueSurrogate@ElementReaderWriterVector3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityValueSurrogate@ElementReaderWriterVector3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityValueSurrogate@ElementReaderWriterVector3(UnityValueSurrogate@ElementReaderWriterVector3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5263};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityValueSurrogate@ElementReaderWriterVector3) == 0x20, "Size mismatch!");

} // namespace end def Fusion::CodeGen
