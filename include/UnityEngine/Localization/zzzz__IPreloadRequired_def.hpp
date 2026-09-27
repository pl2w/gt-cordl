#pragma once
// IWYU pragma private; include "UnityEngine/Localization/IPreloadRequired.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPreloadRequired)
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::Localization {
class IPreloadRequired;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::IPreloadRequired*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::IPreloadRequired*, "UnityEngine.Localization", "IPreloadRequired");
// Dependencies 
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.IPreloadRequired
class CORDL_TYPE IPreloadRequired {
public:
// Declarations
 __declspec(property(get=get_PreloadOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  PreloadOperation;

/// @brief Method get_PreloadOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_PreloadOperation() ;

// Ctor Parameters [CppParam { name: "", ty: "IPreloadRequired", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPreloadRequired(IPreloadRequired const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25059};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
