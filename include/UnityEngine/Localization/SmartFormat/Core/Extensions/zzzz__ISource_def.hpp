#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Extensions/ISource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISource)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*, "UnityEngine.Localization.SmartFormat.Core.Extensions", "ISource");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Extensions.ISource
class CORDL_TYPE ISource {
public:
// Declarations
/// @brief Method TryEvaluateSelector, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "ISource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISource(ISource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::Core::Extensions
