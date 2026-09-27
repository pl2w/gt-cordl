#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/IService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IService)
// Forward declare root types
namespace UnityEngine::Accessibility {
class IService;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::IService*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::IService*, "UnityEngine.Accessibility", "IService");
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.IService
class CORDL_TYPE IService {
public:
// Declarations
/// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Stop() ;

// Ctor Parameters [CppParam { name: "", ty: "IService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IService(IService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Accessibility
