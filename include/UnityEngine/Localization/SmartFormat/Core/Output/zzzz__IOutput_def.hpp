#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Output/IOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IOutput)
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class IFormattingInfo;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Core::Output {
class IOutput;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Core::Output::IOutput*, "UnityEngine.Localization.SmartFormat.Core.Output", "IOutput");
// Dependencies 
namespace UnityEngine::Localization::SmartFormat::Core::Output {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Core.Output.IOutput
class CORDL_TYPE IOutput {
public:
// Declarations
/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::StringW  text, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::StringW  text, int32_t  startIndex, int32_t  length, ::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "IOutput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOutput(IOutput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::SmartFormat::Core::Output
