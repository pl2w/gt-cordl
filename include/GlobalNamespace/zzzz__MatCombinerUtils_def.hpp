#pragma once
// IWYU pragma private; include "GlobalNamespace/MatCombinerUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MatCombinerUtils)
namespace GlobalNamespace {
struct UberShaderMatUsedProps;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MatCombinerUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MatCombinerUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatCombinerUtils*, "", "MatCombinerUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MatCombinerUtils
class CORDL_TYPE MatCombinerUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ApplyExtraFingerprintRules, addr 0x56976c4, size 0x110, virtual false, abstract: false, final false
static inline void ApplyExtraFingerprintRules(::by_ref<::GlobalNamespace::UberShaderMatUsedProps>  matUsedProps) ;

/// @brief Method AverageMaterials, addr 0x56977d4, size 0x7dc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> AverageMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  oldMats) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatCombinerUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatCombinerUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatCombinerUtils(MatCombinerUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatCombinerUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatCombinerUtils(MatCombinerUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{903};

/// @brief Field _k_logPre offset 0xffffffff size 0x8
static constexpr ::ConstString  _k_logPre{u"MaterialCombiner: "};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MatCombinerUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
