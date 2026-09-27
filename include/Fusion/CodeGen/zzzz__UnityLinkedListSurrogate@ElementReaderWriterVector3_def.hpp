#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityLinkedListSurrogate@ElementReaderWriterVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Internal/zzzz__UnityLinkedListSurrogate_2_def.hpp"
#include "Fusion/zzzz__ElementReaderWriterVector3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UnityLinkedListSurrogate@ElementReaderWriterVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::CodeGen {
class UnityLinkedListSurrogate@ElementReaderWriterVector3;
}
// Write type traits
MARK_REF_T(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterVector3*);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterVector3*, "Fusion.CodeGen", "UnityLinkedListSurrogate@ElementReaderWriterVector3");
// [WeaverGenerated]
// Dependencies Fusion.ElementReaderWriterVector3, Fusion.Internal.UnityLinkedListSurrogate`2<T, ReaderWriter>, UnityEngine.Vector3
namespace Fusion::CodeGen {
// Is value type: false
// CS Name: Fusion.CodeGen.UnityLinkedListSurrogate@ElementReaderWriterVector3
class CORDL_TYPE UnityLinkedListSurrogate@ElementReaderWriterVector3 : public ::Fusion::Internal::UnityLinkedListSurrogate_2<::UnityEngine::Vector3,::Fusion::ElementReaderWriterVector3> {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::ArrayW<::UnityEngine::Vector3>  Data;

/// @brief [WeaverGenerated]
 __declspec(property(get=get_DataProperty, put=set_DataProperty)) ::ArrayW<::UnityEngine::Vector3>  DataProperty;

/// @brief [WeaverGenerated]
static inline ::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterVector3* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_Data() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::ArrayW<::UnityEngine::Vector3>  value) ;

/// [WeaverGenerated]
/// @brief Method .ctor, addr 0x5e2f3b8, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [WeaverGenerated]
/// @brief Method get_DataProperty, addr 0x5e2f3a8, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_DataProperty() ;

/// [WeaverGenerated]
/// @brief Method set_DataProperty, addr 0x5e2f3b0, size 0x8, virtual true, abstract: false, final false
inline void set_DataProperty(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLinkedListSurrogate@ElementReaderWriterVector3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterVector3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLinkedListSurrogate@ElementReaderWriterVector3(UnityLinkedListSurrogate@ElementReaderWriterVector3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLinkedListSurrogate@ElementReaderWriterVector3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLinkedListSurrogate@ElementReaderWriterVector3(UnityLinkedListSurrogate@ElementReaderWriterVector3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5284};

/// [WeaverGenerated]
/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterVector3, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::CodeGen::UnityLinkedListSurrogate@ElementReaderWriterVector3) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
