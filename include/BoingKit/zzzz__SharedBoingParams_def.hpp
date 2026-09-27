#pragma once
// IWYU pragma private; include "BoingKit/SharedBoingParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SharedBoingParams)
// Forward declare root types
namespace BoingKit {
class SharedBoingParams;
}
// Write type traits
MARK_REF_T(::BoingKit::SharedBoingParams*);
DEFINE_IL2CPP_CLASS(::BoingKit::SharedBoingParams*, "BoingKit", "SharedBoingParams");
// [CreateAssetMenu(fileName = "BoingParams", menuName = "Boing Kit/Shared Boing Params", order = 550)]
// Dependencies BoingKit.BoingWork::Params, UnityEngine.ScriptableObject
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.SharedBoingParams
class CORDL_TYPE SharedBoingParams : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field Params, offset 0x18, size 0x160 
 __declspec(property(get=__cordl_internal_get_Params, put=__cordl_internal_set_Params)) ::GlobalNamespace::BoingWork_Params  Params;

static inline ::BoingKit::SharedBoingParams* New_ctor() ;

constexpr ::GlobalNamespace::BoingWork_Params const& __cordl_internal_get_Params() const;

constexpr ::GlobalNamespace::BoingWork_Params& __cordl_internal_get_Params() ;

constexpr void __cordl_internal_set_Params(::GlobalNamespace::BoingWork_Params  value) ;

/// @brief Method .ctor, addr 0x5e2a7f8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBoingParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBoingParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBoingParams(SharedBoingParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBoingParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBoingParams(SharedBoingParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5217};

/// @brief Field Params, offset: 0x18, size: 0x160, def value: None
 ::GlobalNamespace::BoingWork_Params  ___Params;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::SharedBoingParams, ___Params) == 0x18, "Offset mismatch!");

static_assert(sizeof(::BoingKit::SharedBoingParams) == 0x178, "Size mismatch!");

} // namespace end def BoingKit
